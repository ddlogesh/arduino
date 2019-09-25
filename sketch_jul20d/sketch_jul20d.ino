void setup()
{
  pinMode(11,OUTPUT);
  
}

void loop()
{
  for(int i=255;i>150;i=i-50)
  {
    analogWrite(11,i);
    delay(800);
  }
  
  for(int i=150;i<255;i=i+50)
  {
    analogWrite(11,i);
    delay(800);
  }
  
  for(int i=149;i>50;i=i-75)
  {
    analogWrite(11,i);
    delay(600);
  }
  for(int i=50;i<149;i=i+75)
  {
    analogWrite(11,i);
    delay(600);
  }
  
  for(int i=50;i>25;i-=10)
  {
    analogWrite(11,i);
  delay(200);
}

for(int i=50;i>25;i-=10)
  {
    analogWrite(11,i);
  delay(200);
}

for(int i=25;i>0;i/=2)
  {
    analogWrite(11,i);
  delay(50);
}
 delay(950);
}
