#include <Arduino.h>
#define led 13
String datosRecibidos;           //String que se envia por el puerto serie

void comandoRecibido(void);
void setup() {
  Serial.begin(9600);
}

void loop() {
   if(Serial.available()>0)      //Procede a la lectura solo si hay datos disponibles en el buffer
  {
    datosRecibidos = Serial.readString ();                    //Lectura del puerto serie
    comandoRecibido();
  }
}

void comandoRecibido(void)
{
  if(datosRecibidos == "A")                                   //Si el caracter es una A
  {
    Serial.println("El comando recibido es A");                            
  }
  else
  {
    if(datosRecibidos == "E")                                 //Si el caracter es una E
    {
        Serial.println("El comando recibido es E"); 

        if(led==0)                         // si led esta apagado lo prende y viceversa 
        {digitalWrite(led,HIGH);}
        else{digitalWrite(led,LOW);}
      
    }
    else                                                      //Si se ingresa una letra diferente a A o E
    {
      Serial.println("LETRA INCORRECTA");
    }
  }
}

