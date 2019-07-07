const int analogPin = A0;
float gerilimDeger = 0;
float sensorDeger = 0;
float sicaklikDeger = 0;
 
void setup() {
  Serial.begin(9600);         
}
 
void loop() {
 sensorDeger = analogRead(analogPin);
 
 Serial.print("Sensör Değeri:  ");
 Serial.println(sensorDeger);

 gerilimDeger = (sensorDeger/1023)*5000;
 
 Serial.print("Gerilim Değeri: ");
 Serial.println(gerilimDeger);
 
 sicaklikDeger = gerilimDeger / 10.0;
 
 Serial.print("Sıcaklık Değeri: ");
 Serial.println(sicaklikDeger);
 
 Serial.println("**********************************");
 delay(1000);
}
