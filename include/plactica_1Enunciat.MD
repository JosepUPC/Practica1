# PRACTICA 1  :  BLINK

El objeticvo de la practica es producir el parpadeo periodico de un led. 
Se utilizara la salida serie  para depurar  el programa 

El microcontrolador que utilizaremos es el ya comentado en la introducción  **ESP32**

![](https://i2.wp.com/roboticx.ps/wp-content/uploads/2019/03/NodeMCU-esp32-04.jpg?fit=600%2C600&ssl=1)



La distribucion de pines de este procesador  es el siguiente 

![](https://i0.wp.com/roboticx.ps/wp-content/uploads/2019/03/ESP32-DOIT-DEVKIT-V1-Pinout-30-GPIOs.jpg?resize=966%2C574&ssl=1)


## FUNCIONALIDAD DE LA PRACTICA

1. Iniciar pin de led como salida 
2. Iniciar el terminal serie 
3. bucle infinito 
    * encender led
    * sacar por puerto serie mensaje *ON*  
    * espera de 500 milisegundos
    * apagar led 
    * sacar por puesto serie mensaje *OFF*
    * espera de 500 milisegundos
  
## referencia

* https://github.com/schacon/blink

* Blink.ino file code

##This repository has an example file to blink the LED on an Arduino board.##

```c++
/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(2000);               // wait for a second
}
```

## TRABAJOS Y PREGUNTAS 

1. Generar el programa  y subir el codigo  al github de cada uno 
2. generar un informe fichero  informe.MD ( markdown  ) donde se muestr el codigo  , un diagrama de flujo y un diagrama de tiempos 
3. Responder a la siguiente pregunta en el programa que se ha realizado cual es el tiempo libre que tiene el procesador ?


# EJERCICIOS voluntarios  DE MEJORA DE NOTA

Elejir entre cualquiera de los siguentes 

* leer el valor de un convertidor  A/D  de entrada ; sacarlo por el puerto serie  y sacar el mismo valor  por otro pin  D/A

https://randomnerdtutorials.com/esp32-adc-analog-read-arduino-ide/

* Leer el valor del sensor de temperatura interno y sacarlo por el puerto serie 

el resultado se ha de subir al github de cada uno y realizar un informe .MD 

https://gist.github.com/xxlukas42/7e7e18604f61529b8398f7fcc5785251
