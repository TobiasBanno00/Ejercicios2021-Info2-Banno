#include <Arduino.h>
#define led 13
String datosRecibidos;           //String que se envia por el puerto serie

void comandoRecibido(void);
void setup() 
{
  Serial.begin(9600);
  pinMode(led,OUTPUT);
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
  if(datosRecibidos == "X")                                   //Si el caracter es una X
  {
    Serial.println("El comando recibido es X");                            
  }
  else
  {
    if(datosRecibidos == "E")                                 //Si el caracter es una E
    {
        

        if(digitalRead(led)==LOW)                         // si led esta apagado lo prende y viceversa 
        {
          digitalWrite(led,HIGH);
          Serial.println("LED ON"); 
        }
        else
        {
          digitalWrite(led,LOW);
          Serial.println("LED OFF");
        }
      
    }
    else                                                      //Si se ingresa una letra diferente a X o E
    {
      Serial.println("LETRA INCORRECTA");
    }
  }
}

