
void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop() {
  int val1,val2;
  val1 = analogRead(0);
  val2=map(val1,950,1030,700,50);
  Serial.println(val2);
  digitalWrite(13,HIGH);
  delay(val2);
  digitalWrite(13,LOW);
  delay(val2);
}
