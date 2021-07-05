#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include "RS232.h"

#define PCOM 2                      //Puerto de comunicacion siempre un valor menos al que lo tenemos conectado
#define BAUDIOS 9600               //Velocidad en baudios
#define tiempoEspera 1500
char repuesta;

int main()
{
	char modo[] = { '8', 'N', '1', 0 };     // 8 bit de datos, no paridad, 1 bit de parada
	unsigned char LetraEnviada;             //variable que guarda la letra que enviaremos, no la creamos como array ya que enviaremos solo una letra
	int CantidadByte;                       //numero de byte recibidos en la comunicacion serial
	
	if(RS232_OpenComport(PCOM, BAUDIOS, modo, 0))                //Devuelve un 1 si no detecta comunicacion serial en el puerto
	{
		printf("El puerto COM no se pudo abrir correctamente \n");
		return(0);
	}
	
	Sleep(tiempoEspera);                            //Tiempo de espera para que no haya error en la entrega de datos 

	while(1)                                //Bucle infinito
	{
		printf("Letra a enviar: ");
		gets(LetraEnviada);
		RS232_cputs(PCOM, LetraEnviada);       //Envia lo guardado en la variable "LetraEnviada" por la salida tx

		Sleep(tiempoEspera);                        //Tiempo de espera para que no haya error en la entrega de datos 

		CantidadByte = RS232_PollComport(PCOM, gets(repuesta), sizeof(repuesta)-1);  /* guardar la cantidad de byte recibidos y le guarda a la 
                                                                                            estructura "ESensores" los valores recibidos por el rx */
		
		if(CantidadByte>0)      //Si se recibe mas de 0 byte entra y muestra los  valores leidos
		{
			printf("cantidad de byte recibidos: %d\n",CantidadByte);
			printf("Repuesta de Arduino: %c \n", repuesta);

			printf("-------------------------------------------------------------------------- \n");
		}
		else
		{
		printf("Esta letra no corresponde a ningun comando\n");            // Si la cantidad de byte devueltos por arduino es 0
		}
		
	}
}
