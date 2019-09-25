int pushButton = 12;
int buzzer = 3;

void setup() {
  pinMode(pushButton, INPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

long timeArray[100];
int arrayCount = 0;

int previousButtonState = 0;
unsigned long previousActionTime = -1;
void loop() {
    int buttonState = digitalRead(pushButton);
    digitalWrite(buzzer, buttonState);
    if(buttonState != previousButtonState)//press or release
    {
        if(previousActionTime != -1)
          timeArray[arrayCount++] = millis() - previousActionTime;
        previousActionTime = millis();
    }
    previousButtonState = buttonState;

    if(buttonState == 0 && (millis() - previousActionTime) > 3000)//idle for more than 3sec
    {
      for(int i=0; i<arrayCount; i+=2)
      {
          digitalWrite(buzzer, HIGH);
          delay(timeArray[i]);
          digitalWrite(buzzer, LOW);
          delay(timeArray[i+1]);
      }
      arrayCount = 0;
      previousActionTime = -1;
    }
    delay(10);
}

