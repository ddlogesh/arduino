
int pin1=12;
int pin2=3;

void setup()
{
pinMode(pin1,INPUT);
pinMode(pin2,OUTPUT);
Serial.begin(9600);
}

void loop()
{
  int value=digitalRead(pin1);
  Serial.println(value);
  if(value==1)
  {
    digitalWrite(pin2,HIGH);
    delay(500);
  }    
    digitalWrite(pin2,LOW); 
}
