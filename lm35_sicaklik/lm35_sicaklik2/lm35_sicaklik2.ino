int lm35Pin = A0;
int led = 8;
#define buzzer 9

int zaman = 500; // 0.5 saniye
int okunan_deger = 0;
float sicaklik_gerilim = 0;
float sicaklik = 0;

void setup() 
{
  pinMode(led,OUTPUT);
  pinMode(buzzer,OUTPUT);
  Serial.begin(9600);
}
 
void loop()
{
  okunan_deger = analogRead(lm35Pin);
  sicaklik_gerilim = (okunan_deger / 1023.0)*5000;
  sicaklik = sicaklik_gerilim /10.0; 
  Serial.print("OKUNAN");
  Serial.println(okunan_deger);
  Serial.println("--------------");
  Serial.print("SICAKLIK");
  Serial.println(sicaklik);
   Serial.println("--------------");
   
  if(sicaklik >= 30){
    digitalWrite(led,HIGH);
    digitalWrite(buzzer,HIGH);
    delay(zaman);
    digitalWrite(led,LOW);
    digitalWrite(buzzer,LOW);
    delay(zaman);
  }
  else{
    digitalWrite(led,LOW);
    digitalWrite(buzzer,LOW);
     delay(zaman);
    
  }
}
