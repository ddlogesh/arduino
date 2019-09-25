#include<Servo.h>
Servo myservo;

int val,jval;

void setup()
{
  Serial.begin(9600);
  myservo.attach(8);
}
void loop()
{
  jval=analogRead(A0);
  Serial.println(jval); 
  if(jval<1020)
    myservo.write(70);
  else
    myservo.write(180);
  delay(100);
}
