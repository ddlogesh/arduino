void setup() {
  pinMode(13,OUTPUT);
  Serial.begin(9600);
  Serial.println("Hiya");
}
void blinkLED(int x){
  int i;
  for(i = 0;i < x;i ++){
  digitalWrite(13,HIGH);
  delay(100);
  digitalWrite(13,LOW);
  delay(300);
  int value=i+1;
  Serial.println(value);}
}
void loop() {
  blinkLED(5);
  delay(1000);

}
