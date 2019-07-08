char gelenVeri;
void setup() {
  pinMode(13,OUTPUT);
  Serial.begin(9600);
  Serial.println("Arduino Bluetooth Kontrol");
}
 
void loop() {
  if (Serial.available()>0){
    
    gelenVeri=Serial.read();
    
    if(gelenVeri=='1'){
      digitalWrite(13,1);
      Serial.println("LED Yakildi.");
    }
    
    if (gelenVeri=='0'){
      digitalWrite(13,0);
      Serial.println("LED Sonduruldu." );
    }
  }
  delay(100);
}
