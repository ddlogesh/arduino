int pin=7;
void setup()
{
  pinMode(pin,INPUT);
  pinMode(11,OUTPUT);
  Serial.begin(9600);
  Serial.println("Testing");
}
int k=0,prev=0;
void loop()
{
int value=digitalRead(pin);  
Serial.println(value);
if(value==1 && prev==0)
{ if(k==0)
  k=1;
  else
  k=0;
}
prev=value; 
digitalWrite(11,k);
  
}

