int number;
void setup() {
  Serial.begin(9600);
 
}

void loop() {
   number = 0;
   Serial.flush();
  while(Serial.available() == 0)
  {}
  while(Serial.available() > 0){
    number = Serial.read() - '0';
  }
  Serial.println("You entered :");
  Serial.println(number);
  Serial.println("Multiplied by two is");
  Serial.println(number*2);

}
