#include <Arduino.h>

#define TIEMPO 1500                 //matriz 4x4
int filaAlto, columnaAlto;

void setup() {
  DDRD = DDRD|B00001111;      // de pin 0 a pin 3 como salida   
  DDRB = DDRB|B001111;      // de pin 8 a pin 11 como salida
  
}

void loop() {
for (columnaAlto = B00000001;columnaAlto <= B00001000; columnaAlto = columnaAlto<<1)
  {
    PORTB=columnaAlto; 
    for(filaAlto = B0000001;filaAlto <= B00001000; filaAlto = filaAlto<<1) 
    {
      PORTD=~filaAlto;
      delay(TIEMPO);
    }
  }