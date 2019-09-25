int pin=2;
int pin1=4;
void setup()
{
  pinMode(pin,INPUT);
  pinMode(pin1,INPUT);
  pinMode(7,OUTPUT);
  Serial.begin(9600);
  Serial.println("Testing");
}
int k=0;
long int time;
void loop()
{
int value1=digitalRead(pin1);    
Serial.println(value);

if(value1==1)
{
  time=millis();
  
  
digitalWrite(7,HIGH);
delay(50);
}
digitalWrite(7,LOW);  
}

