#include<Servo.h>
Servo myservo;
int servoPin=8;
int prev=450;
void setup()
{
  myservo.attach(servoPin);
  Serial.begin(9600);
}
void loop()
{
  int value=analogRead(A0);
  value=map(value,0,1023,0,180); 
  Serial.println(value);
  if(value<176)
  {
   for(int i=0;i<180;i++)
     {
    myservo.write(i);
    delay(5);
     }
  } 
  delay(20);
}
