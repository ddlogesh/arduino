#include "IMUGY85.h"
IMUGY85 imu;
double ax, ay, az, gx, gy, gz, roll, pitch, yaw;
int p1=6;
int p2=5;
void setup()
{
  Serial.begin(9600);
  pinMode(p1,OUTPUT);
  pinMode(p2,OUTPUT);
  imu.init();
}

int default1=getRandom(0,360);
void loop()
{
  imu.update();
  Serial.println(default1);
  printRollPitchYaw();
  //printAccel();
  delay(10);
  //printGyro();
  int value=imu.getYaw();
  int v=(default1-value);
  
   if(v==default1)
    {
      analogWrite(p1,LOW);
       analogWrite(p2,LOW);
    }
    if(v>0)
    {
      analogWrite(p1,HIGH);
      analogWrite(p2,LOW);
    }
    else
    {
      analogWrite(p2,HIGH);
      analogWrite(p1,LOW);
    }
  

  /*
  if(v==0)
  analogWrite(p1,0);
  else
  {
    v=map(v,0,360,0,255);
    analogWrite(p1,v); 
  }
    */
}

void printAccel()
{
  imu.getAcceleration(&ax, &ay, &az);
  Serial.print(ax);Serial.print("\t");
  Serial.print(ay);Serial.print("\t");
  Serial.print(az);Serial.print("\t");
  Serial.println();
}

void printGyro()
{
  imu.getGyro(&gx, &gy, &gz);
  Serial.print(gx);Serial.print("\t");
  Serial.print(gy);Serial.print("\t");
  Serial.print(gz);Serial.print("\t");
  Serial.println();
}

void printRollPitchYaw()
{
  roll = imu.getRoll();
  pitch = imu.getPitch();
  yaw = imu.getYaw();
  Serial.print(pitch);Serial.print("\t");
  Serial.print(roll);Serial.print("\t");
  Serial.print(yaw);Serial.print("\t");
  Serial.println();
 
}

int getRandom(int min,int max)
{
  randomSeed(analogRead(0));
  return random(min,max);
}


