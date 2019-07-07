const int LED =13;                      //  set Led indicator  (pin nbr)
const int BTPWR=12;                     //  set  Power          (pin nbr)
char nomeBT[13]="HC - 08";            //  set Char " new Name & numbers of caracters of this new name [13] "
char pin[5]="0007";

void setup(){
  pinMode(LED, OUTPUT);                             // set LED Output                  
  pinMode(BTPWR, OUTPUT);                             // set LED Power Output 
  
  digitalWrite(LED, LOW);
  digitalWrite(BTPWR, HIGH);
  
  Serial.begin(9600);                             //  SET Baud Rate Speed 
  Serial.print("AT");                              //  SET Module to " Program Mode "
  delay(1000);
  Serial.print("AT+NAME");                          //  SET Module to " Program New Name "
  Serial.print("HC-05");                       //  SET "  New Name "
  Serial.print("\r\n");
  delay(1000);                     
  
  Serial.print("AT+BAUD:");                           //  SET Baud SPEED  "to Comm with Module "
  Serial.print("9600");                                //  SET Baud SPEED   
  Serial.print("\r\n");
  delay(1000);

  Serial.print("AT+PIN");                                //  SET MOdule to " new Password "
  Serial.print("0007");                                   //  SET " Password "      default = ( 1234 )
  Serial.print("\r\n");
  delay(1000);
  digitalWrite(LED, HIGH);                                  //  all  Job is DONE Congrats ! visit : www.bikemanuelcesar.com       !
}
void loop(){
}
