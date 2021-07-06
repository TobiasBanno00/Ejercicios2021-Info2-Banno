#include <Arduino.h>

#define pote A0
#define led 4

int voltajeSalida=0;
void setup() 
{
  pinMode(pote, INPUT);
  pinMode(led, OUTPUT);

}

void loop() {

  voltajeSalida=((analogRead(pote))*255)/1023;

  analogWrite(led,voltajePote);

}