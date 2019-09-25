
void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop() {
  int val1,val2;
  val1 = analogRead(0);
  val2=map(val1,950,1030,255,0);
  Serial.println(val2);
  analogWrite(13,val2);
}
