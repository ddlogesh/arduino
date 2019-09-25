  //Led pin numbers as per ur circuit
int led = 3;

void setup() {                
  pinMode(led, OUTPUT);
}

void loop() {
  normalFade();
  delay(1000);
  
  smoothFade();
  delay(1000);
  
  bounce();
  delay(1000);
  
  bounce2();
  delay(3000);
  
}

void normalFade()
{
  for(int i=0; i<255; i++)
  {
    analogWrite(led, i);
    delay(2);
  }
  for(int i=255; i>=0; i--)
  {
    analogWrite(led, i);
    delay(2);
  }
}

void smoothFade()
{
  for(int i=0;i<=180;i++)
  {
    analogWrite(led, 255 * sin(radians(i)));
    delay(7);
  }
}

void bounce()
{
  for(float j=0; j<255; j+=40)
  {
    for(int i=0; i<=180; i++)
    {
      analogWrite(led, (255 - j) * sin(radians(i)));
      delay(5);
      //delay(5-3*j/255);
    } 
  }
}

void bounce2()
{
  float brightness = 255;
  float delayValue = 5;
  for(float j=0; j<30; j++)
  {
    brightness -= brightness * 0.15;
    delayValue -= delayValue * 0.1;
    for(int i=0; i<=180; i++)
    {
      analogWrite(led, brightness * sin(radians(i)));
      delay(delayValue);
    } 
  }
}
