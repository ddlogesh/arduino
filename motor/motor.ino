int motorPin1 = 13;
int motorPin2 = 12;
int motorEnable = 11;//PWM
int ip1=6;
int speed=150;
int i=1;
void setup(){
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(motorEnable, OUTPUT);
  pinMode(ip1,INPUT);
}
void loop()
{
  digitalWrite(motorPin1,LOW);
  delay(1000);
  
  int value=digitalRead(ip1);
  Serial.println(value);
  if(value==1)
  {  i=i+1;
   Serial.println(i);
    
    analogWrite(motorEnable,speed+i*10);
  }
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  delay(1000);
  
}
