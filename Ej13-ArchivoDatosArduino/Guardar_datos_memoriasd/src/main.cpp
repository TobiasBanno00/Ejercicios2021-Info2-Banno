#include <Arduino.h>
#include <SPI.h>
#include <SD.h>

/*
Conexiones con Arduino UNO
--SCK  PIN 13
--MISO PIN 12
--MOSI PIN 11
--CS   chipSelect
--5 V
--GND
*/

#define CHIPSELECT 4                //Pin chipSelect para comunicacion SPI
#define sensorH A0

struct sensores
{
        uint32_t tiempo;           //Tiempo transcurrido
        uint16_t valorSensor;           //Valor de sensor
        uint8_t tipoSensor;            //Tipo de sensor leido
}sensor1={'H',0,0},*PtrSensores;                //le damos el nombre al sensor

void EscrituraSD(void);     //Funcion  escrituraSD
void LSensores( struct Sensores *PtrSensores, char Indi );  //Lectura sensores

void setup() {
  Serial.begin(9600);           //Inicializacion del puerto serie

  Serial.println("Inicializando tarjeta SD...");

   if (!SD.begin(CHIPSELECT))            //En caso de que no se inicialice correctamente
  {
    Serial.println("Error con la tarjeta SD");
    while (1);
  }
  Serial.println("Tarjeta iniciada");   //Si se inicializa correctamente
}

void loop() 
{
  EscrituraSD();
}

void EscrituraSD(void)
{
  PtrSensores = &sensor1;           //Cambio la direccion del puntero tipo estructura
  LSensores( PtrSensores , 'H');    //Realizo la lectura, pasandole el puntero y el char 'H' de temperatura

  File archivo;                           //Puntero de tipo fichero o "archivo"

  archivo = SD.open("archivo.dat", FILE_WRITE);       //Apertura del archivo en modo escritura
  
  if(archivo)                                         //Si se abre correctamente
  {
    Serial.println("Escribiendo...");                 //Muestreo en puerto serie

    archivo.write((const uint8_t *)&sensor1, sizeof(sensor1));    //Guarda la estructura 
    
    archivo.close();                                  //Cierra el archivo
  }
  else                                                //Si no se abre correctamente
  {
    Serial.println("Error al escribir el archivo");
  }
}

void LSensores( struct Sensores *PtrSensores, char Indi)
{
  switch (Indi)
  {
    case 'H':                                   //Indicador para sensor de humedad

      PtrSensores->VSensor = analogRead(sensorH);      //Cambio el valor de lectura
      PtrSensores->TTSensor = ((millis() - (PtrSensores->TTSensor)));//Cargo el tiempo transcurrido de la ultima lectura
    break;
  }
}