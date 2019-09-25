#include <toneAC.h>
int melody[] = {50,150,220,280,350,420,490};
//int sare[]={154,254,350,452,567,710,880};
int sare[]={1700,2500,2000,3000,3500,4000,500};
int noteDurations[] = { 4, 8, 8, 4, 4, 4, 4};

int key1=3;
int key2=4;
int key3=5;
int key4=6;
int key5=7;
int key6=8;
int mode=11;
void setup() 
{
 pinMode(key1,INPUT);
 pinMode(key2,INPUT);
 pinMode(key3,INPUT);
 pinMode(key4,INPUT);
 pinMode(key5,INPUT);
 pinMode(key6,INPUT);
 pinMode(mode,INPUT);   
 Serial.begin(9600);
}

void loop() {
  
  toneAC();
  int value1=digitalRead(key1);
  int value2=digitalRead(key2);
  int value3=digitalRead(key3);
  int value4=digitalRead(key4);
  int value5=digitalRead(key5);
  int value6=digitalRead(key6);
  int mod=digitalRead(mode);
  Serial.println(value2);
if(value1==1)
{
  toneAC(sare[0], 10, 300, true); // Play thisNote at full volume for noteDuration in the background.
     // Wait while the tone plays in the background, plus another 33% delay between notes.
}
else if(value2==1)
{
  toneAC(sare[1], 10, 300, true); // Play thisNote at full volume for noteDuration in the background.
}

else if(value3==1)
{
 toneAC(sare[2], 10, 300, true); 
}

else if(value4==1)
{
  toneAC(sare[3], 10, 300, true);
}

else if(value5==1)
{
  toneAC(sare[4], 10, 300, true);
}

else if(value6==1)
{
  toneAC(sare[5], 10, 300, true);
}

else if(mod==0)
{
  toneAC(sare[6],100,300,true);
}
else
;


delay(5);
}
