#include "dht.h"
#define dht_apin A0 
 
dht DHT;
 
void setup(){ 
  Serial.begin(9600);
  delay(500);
  Serial.println("DHT11 Sicaklik Ve Nem Sensoru\n\n");
  delay(1000);
}
 
void loop(){
    DHT.read11(dht_apin);
   
    Serial.print("Mevcut Nem = ");
    Serial.print(DHT.humidity);
    Serial.print("%  ");
    Serial.print("Sicaklik = ");
    Serial.print(DHT.temperature); 
    Serial.println("C  ");
    
    delay(5000);
}
