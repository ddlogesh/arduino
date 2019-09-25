void setup() {
 pinMode(13,OUTPUT);
}
void dot(){
  digitalWrite(13,HIGH);
  delay(100);
  digitalWrite(13,LOW);
  delay(1000);
}

void dash(){
  digitalWrite(13,HIGH);
  delay(500);
  digitalWrite(13,LOW);
  delay(1000);
}

void loop() {
  //Message in Morse: 'Hi guys'
  dot();
  dot();
  dot();
  dot();
  delay(2000);
  dot();
  dot();
  delay(2000);
  dash();
  dash();
  dot();
  delay(2000);
  dot();
  dot();
  dash();
  delay(2000);
  dash();
  dot();
  dash();
  dash();
  delay(2000);
  dot();
  dot();
  dot();
  while(1)
  digitalWrite(13,LOW);

}
