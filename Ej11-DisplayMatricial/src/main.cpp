#include <Arduino.h>

#define TIEMPO 1500                 //matriz 4x4
int filaAlto, columnaAlto;

void setup() {
  DDRD = DDRD|B00001111;      // de pin 0 a pin 3 como salida   
  DDRB = DDRB|B001111;      // de pin 8 a pin 11 como salida
  
}

void loop() {
for (filaAlto = B000001;filaAlto <= B001000; filaAlto = filaAlto<<1)
  {
    PORTB=filaAlto; 
    for(columnaAlto = B00000001;columnaAlto <= B0001000; columnaAlto = columnaAlto<<1) 
    {
      PORTD=~columnaAlto;
      delay(TIEMPO);
    }
  }