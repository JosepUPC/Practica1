//PROCESADO DIGITAL
//PRÀCTICA 1.1
#include <Arduino.h>

//Declarar el numero del pin de salida. El valor 1 nos indica que el pin que se esta 
//cogiendo de la ESP1 es el propio LED de la placa. 
  int impresion = 1;

void setup() {
  
      //Iniciar pin de led como salida
      pinMode(impresion, OUTPUT);

      //Iniciar el terminal serie
      Serial.begin(115200);

}

void loop() {

  //encender led
  digitalWrite(impresion, HIGH);

  //sacar por puerto serie mensaje ON
  Serial.println("ON");

  //espera de 500 milisegundos
  delay(500);

  //apagar led
  digitalWrite(impresion, LOW);

  //sacar por puesto serie mensaje OFF
  Serial.println("OFF");

  //espera de 500 milisegundos
  delay(500);

}