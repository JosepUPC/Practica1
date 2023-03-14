//PROCESADO DIGITAL
//PRÀCTICA 1.3
#include <Arduino.h>

//Declaro la variable que recogera el valor de la temoperatura del 
//procesador en todo momento.
float temperature=0;

void setup() {
  
      //Iniciar el terminal serie
      Serial.begin(115200);
}

void loop() {

  ///ejecuto la funcion para recolectar el valor de temperatura del procesador
  temperature=temperatureRead();

  //sacar por puesto serie el valor de la temperatura
  Serial.println(temperature);
  delay(500);
}