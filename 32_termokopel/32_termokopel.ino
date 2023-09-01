#include "max6675.h"
#include "declare.h"
#include "heatpipe.h"

unsigned long interval=0; // the time we need to wait
unsigned long previousMillis=0; // millis() returns an unsigned long.

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); 
Serial.println("Arduino 2");
delay(500);
}

void loop() {
    Serial.write(termo)
  // put your main code here, to run repeatedly:
}

void termo(){
  label();
  waktu();
  evaporator();
  adiabatik();
  condenser();
  delay(1000);
}

void label()
{ if (millis()<= 500){
  Serial.print("Waktu");
  Serial.print(",");
  Serial.print("T17_Adia");
  Serial.print(",");
  Serial.print("T18_Adia");
  Serial.print(",");
  Serial.print("T19_Cond");
  Serial.print(",");
  Serial.print("T20_Cond");
  Serial.print(",");
  Serial.print("T21_Cond");
  Serial.print(",");
  Serial.print("T22_Cond");
  Serial.print(",");
  Serial.print("T23_Cond");
  Serial.print(",");
  Serial.print("T24_Cond");
  Serial.print(",");
  Serial.print("T25_Cond");
  Serial.print(",");
  Serial.print("T26_Cond");
  Serial.print(",");
  Serial.print("T27_Cond");
  Serial.print(",");
  Serial.print("T28_Air Evaporator");
  Serial.print(",");
  Serial.print("T29_Udara Evaporator");
  Serial.print(",");
  Serial.print("T30_Air Condenser");
  Serial.print(",");
  Serial.print("T31_Udara Condenser");
  Serial.print(",");
  Serial.print("T32_Udara Adia");
  Serial.println();
  }
}


void waktu()
{
  unsigned long currentMillis = millis(); // grab current time
  
 // check if "interval" time has passed (1000 milliseconds)
 if ((unsigned long)(currentMillis - previousMillis) >= interval) {
   currentMillis = currentMillis/1000;
   Serial.print(currentMillis); // "toggles" the state
   Serial.print(",");
   previousMillis = millis();
   //Serial.println();
 }
}
