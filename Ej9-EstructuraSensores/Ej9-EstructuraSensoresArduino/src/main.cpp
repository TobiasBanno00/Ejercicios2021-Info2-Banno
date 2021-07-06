#include <Arduino.h>


 struct sensores      //creamos la estructura sensores 
{
        char tipoSensor;
        int valorSensor;
        unsigned long tiempo;
};

//Configuraciones
void setup() {
  Serial.begin(9600);
}

//Bucle principal
void loop() 
{
  struct sensores x;                //declaramos variable
  Serial.print("El tamaño de la estructura es: ");
  int tamanio =sizeof(x); 
  Serial.println(tamanio);
  while(true); 
}