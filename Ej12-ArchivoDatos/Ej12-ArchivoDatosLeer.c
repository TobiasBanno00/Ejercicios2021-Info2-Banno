#include <stdio.h>

struct sensores
{
        char tipoSensor;
        int valorSensor;
        unsigned long tiempo;
}sensor1={'H',10,5},*ptrsensor;                //le damos valores cualquiera a la estructura, esto lo podriamos tmb hacer con un scanf o con un sensor

int main(void)
{
    ptrsensor=&sensor1;
    FILE *archivo;                       //declaración puntero archivo
    archivo=fopen("archivo.bin","r");    // leemos un archivo.bin

    if(archivo == NULL) {
    printf("Error al abrir archivo!");
    return -1;
    }

    fread(ptrsensor, sizeof(sensor1), 1, archivo);        //guardamos lo leido en nuestra estructura ya creada

   // fscanf(archivo, 'struct sensores', sensor1);      // ESTO ES USADO PARA ARCHIVOS.TXT !!!! 

    fclose(archivo);                                    //cerramos el archivo escrito

    printf("NOMBRE DL SENSOR: %s, VALOR DE SENSOR: %d, TIEMPO DEL SENSOR: %d \n", sensor1.tipoSensor,sensor1.valorSensor,sensor1.tiempo);
}