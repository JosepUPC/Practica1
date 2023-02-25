//PROCESADO DIGITAL
//PRÀCTICA 1.1.1
#include <Arduino.h>

//Declarar el numero del pin de salida. El valor 1 nos indica que el pin que se esta 
//cogiendo de la ESP1 es el G23
  int impresion = 23;

void setup() {
  
      //Iniciar pin de led como salida
      pinMode(impresion, OUTPUT);

      //Iniciar el terminal serie
      Serial.begin(115200);

}

void loop() {

  //enviar una señal de 5 voltios al osciloscopio
  digitalWrite(impresion, HIGH);

  //espera de 500 milisegundos
  delay(500);

  //enviar una señal de 0 voltios al osciloscopio
  digitalWrite(impresion, LOW);

  //espera de 500 milisegundos
  delay(500);

}
//En el Osciloscopio se tendria que observar como la señal toma forma de sierra
//De no ser asi, reduce la frequencia de muestra para poder observarla.