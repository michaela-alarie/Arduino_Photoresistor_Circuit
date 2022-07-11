int photodiodePin = A0;
int anaValue = 0;
int TTLval = 0;

void setup(){
  Serial.begin(9600); //set Serial output baud rate
  //For output format
  Serial.println("\nVoltage(V):");
  Serial.print("--------------------------------------------------\n");
}

void loop() {
    anaValue = analogRead(photodiodePin); // potentiometer voltage

    //float voltage = 5-(anaValue/1024.0)*5;
    //Serial.println(String(voltage,2)+"V");
    //Serial.println(String(anaValue));
    //delay(2000); //delay 250ms to prevent any duplicates
    if(anaValue<850){
      digitalWrite(47, 1);
      TTLval = 1;
    }
    else{
      digitalWrite(47,0);
      TTLval = 0;
    }
    Serial.println(String(TTLval));
}