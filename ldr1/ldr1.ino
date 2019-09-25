

//int minip=300;
//int maxop=1000;
//int x=0;
int pin1=3;
int pin2=5;
int pin3=6;
void setup()
{
  pinMode(pin1,OUTPUT);
  pinMode(pin2,OUTPUT);
  pinMode(pin3,OUTPUT);
  Serial.begin(9600);
}


void loop()
{
int value=analogRead(A0);
int s=map(value,200,1000,0,225);
if(s<50)
{
analogWrite(pin1,200);
analogWrite(pin2,200);
analogWrite(pin3,200);
delay(1000);
analogWrite(pin1,0);
analogWrite(pin2,0);
analogWrite(pin3,0);
}


else if(s<100)
{
  analogWrite(pin1,200);
  analogWrite(pin2,200);
  delay(1000);
  analogWrite(pin1,0);
  analogWrite(pin2,0);
}

else
{
  analogWrite(pin1,200);
  delay(1000);
  analogWrite(pin1,0);
}


Serial.println(value);
delay(100);
}



