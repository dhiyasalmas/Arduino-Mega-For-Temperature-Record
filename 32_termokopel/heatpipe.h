void evaporator() 
{ 
  String thermocouple1a = String(thermocouple17.readCelsius());
  Serial.print(thermocouple1a);
  Serial.print(",");
  Serial.print(thermocouple18.readCelsius());
  Serial.print(",");
  Serial.print(thermocouple19.readCelsius());
  Serial.print(",");
  Serial.print(thermocouple20.readCelsius());
  Serial.print(",");
  Serial.print(thermocouple21.readCelsius());
  Serial.print(",");
  //Serial.println();
  }


void adiabatik()
{
  Serial.print(thermocouple22.readCelsius());
  Serial.print(",");
  Serial.print(thermocouple23.readCelsius());
  Serial.print(",");
  Serial.print(thermocouple24.readCelsius());
  Serial.print(","); 
  Serial.print(thermocouple25.readCelsius());
  Serial.print(",");
  Serial.print(thermocouple26.readCelsius());
  Serial.print(",");
  //Serial.println();
  }

void condenser()
{
  Serial.print(thermocouple27.readCelsius());
  Serial.print(",");
  Serial.print(thermocouple28.readCelsius());
  Serial.print(","); 
  Serial.print(thermocouple29.readCelsius());
  Serial.print(","); 
  Serial.print(thermocouple30.readCelsius());
  Serial.print(","); 
  Serial.print(thermocouple31.readCelsius());
  Serial.print(","); 
  Serial.print(thermocouple32.readCelsius());
  //Serial.print(","); 
  Serial.println(); 
  }
