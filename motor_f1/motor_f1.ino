int motorPin1 = 13;
int motorPin2 = 12;
int motorEnable = 11; //PWM

int leftButton = 6;
int rightButton = 7;

int motorSpeed = 0;
const int SPEED_INC = 15;

void setup(){
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(motorEnable, OUTPUT);

  pinMode(leftButton, INPUT);
  pinMode(rightButton, INPUT);
  
  analogWrite(motorEnable, 0);
  Serial.begin(9600);
}

int leftButtonPreviousState = 0;
int rightButtonPreviousState = 0;
void loop(){
  int leftButtonState = digitalRead(leftButton);
  int rightButtonState = digitalRead(rightButton);

  if(leftButtonState == 1 && leftButtonPreviousState == 0)
    motorSpeed = min(255, motorSpeed + SPEED_INC);
  if(rightButtonState == 1 && rightButtonPreviousState == 0)
    motorSpeed = max(-255, motorSpeed - SPEED_INC);
  if(motorSpeed>0)
  {
    digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin2, LOW);
  }else
  {
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, HIGH);
  }
  analogWrite(motorEnable, abs(motorSpeed));
  delay(10);
}
