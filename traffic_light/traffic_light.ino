
int value=0;
int state=1;
int prev=0;
int pini=7;
int pino1=11;
int pino2=10;
int pino3=9;
int pin=11;

void setup()
{
 pinMode(pini,INPUT);
 pinMode(pino1,OUTPUT);
 pinMode(pino2,OUTPUT);
 pinMode(pino3,OUTPUT);
 Serial.begin(9600);
 Serial.println("Traffic Signal Test:");
}

void loop()
{
  
int value=digitalRead(pini);
Serial.println(value);
if(value==1 && prev==0)
{
  if(state==1)
  {
   digitalWrite(pino1,LOW);
   digitalWrite(pino2,HIGH);
   delay(500);
   digitalWrite(pino2,LOW);
   digitalWrite(pino3,HIGH);
   pin=9;
   state=2; 
  }
  else
  {
    
   digitalWrite(pin,LOW);
   digitalWrite(pino3,HIGH);
  // delay(1000);
   digitalWrite(pino3,LOW);
   digitalWrite(pino2,HIGH);
   delay(500);
   digitalWrite(pino2,LOW);
   digitalWrite(pino1,HIGH);
   pin=11;
   state=1;
  }
}  
 digitalWrite(pin,HIGH);
  
 prev=value;
  
}  

