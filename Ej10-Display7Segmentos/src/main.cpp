#include <Arduino.h>

#define TIEMPO 1500
int ledEncendido;

void setup() {
  DDRD = DDRD | B11111110;          //Configura los pines del 0 al 7 como salida
  
}

void loop() {
 for (ledEncendido = B00000010; ledEncendido <= B10000000; ledEncendido = ledEncendido<<1)
  { 
    PORTD=ledEncendido;
    delay(TIEMPO);
  }
}