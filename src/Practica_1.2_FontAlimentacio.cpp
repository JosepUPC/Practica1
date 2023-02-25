//PROCESADO DIGITAL
//PRÀCTICA 1.2

#include <Arduino.h>

//Declarar el numero del pin de entrada.El valor 1 nos indica que el pin que se esta 
//cogiendo de la ESP1 es el G15
//FA=fuente de alimentacion
    int FA = 15;

//Declaro las variables para almacenar el valor analogico de la fuente
//AmV=valor analógico en milivoltios, AV=valor analógico en voltios
    float AmV=0, AV=0;  

void setup() {
  
      //Iniciar pin de led como salida
      pinMode(FA, INPUT);

      //Iniciar el terminal serie
      Serial.begin(115200);

}

void loop() {
    //ejecuto la funcion para recolectar el valor analogico del puerto
    AmV=analogRead(FA);
    
    //Hago la conversion a voltios del valor
    AV=AmV/100;
    
    //proyecto por pantalla el valor de la fuente de alimentacion
    Serial.println(AV);
}
//Observa que cada ves que varies el voltage dento de el rango establecido
// port la capazidad de la placa (de 0 a 5V). te mostrara por la pantalla
//output el valor de este.