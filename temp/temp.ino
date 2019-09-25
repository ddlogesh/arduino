#include <DHT.h>
#include <DHT_U.h>
DHT dht(2,DHT22);



void setup() {
  Serial.begin(9600);
  dht.begin();
    
  
  
  }

void loop() {
  float val;
  val = dht.readTemperature();
  Serial.println(val);
  delay(100);
}
