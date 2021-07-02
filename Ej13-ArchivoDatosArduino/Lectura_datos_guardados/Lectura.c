#include <stdio.h>
#include <stdint.h>

struct Sensores                     //Estructura de tipo sensores a guardar en el archivo
{
    uint32_t TTSensor;           //Tiempo transcurrido
    uint16_t VSensor;           //Valor de sensor
    uint8_t NSensor;            //Tipo de sensor leido
       
} Lectura;

int main()
{
    printf("Prog. para leer archivo en memoria SD \n");
    printf("---------------------------------------------------------------------------------------- \n");

    FILE *fptr;                                //Puntero de tipo FILE, para leer y escribir archivos
    fptr = fopen( "archivo.dat", "r" );        //Se abre el archivo en modo lectura

    if( fptr == NULL )                              //En caso de que no se haya podido abrir el archivo
    {
        printf("ERROR AL ABRIR EL ARCHIVO \n");
        return -1;
    }

    printf("Valores leidos: \n");
    printf("NSensor: Inicial que indica el sensor------->  H = HUMEDAD \n");
    printf("VSensor: Lectura analogica del sensor ------->  Valor entre 0 y 255 \n");
    printf("TTSensor: Tiempo transcurrido de la ultima lectura ------->  Mostrado en segundos \n");

    printf("---------------------------------------------------------------------------------------- \n");

    printf("NSensor ---------------- VSensor ---------------- TTSensor \n");

    while ( !feof(fptr))         //Mientras no se llegue al final
    {
        fread(&Lectura, sizeof(struct Sensores), 1, fptr);
        printf(" %c                       %d                        %ld \n",Lectura.NSensor,Lectura.VSensor, (Lectura.TTSensor)/1000);  //Muestreo datos leidos, el tiempo se divide en 1000 para mostrarse en segundos
    }
    fclose(fptr);                                   //Se cierra el archivo
    return 0;
}