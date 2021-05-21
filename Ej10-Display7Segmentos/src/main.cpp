#include <Arduino.h>

#define TIEMPO 1500

void setup() {
  DDRD = DDRD | B11111111;          //Configura los pines del 0 al 7 como salida
  
}

void loop() {
 for (ledEncendido = B00000001; ledEncendido <= B10000000; ledEncendido = ledEncendido<<1)
  { 
    PORTD=ledEncendido;
    delay(TIEMPO);
  }
}