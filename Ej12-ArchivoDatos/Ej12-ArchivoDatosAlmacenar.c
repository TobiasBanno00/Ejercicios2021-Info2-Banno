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
    archivo=fopen("archivo.bin","w");    // abrimos/creamos un archivo.bin

    if(archivo == NULL) {
    printf("Error al abrir archivo!");
    return -1;
    }

    fwrite(ptrsensor, sizeof(sensor1), 1, archivo);        //guardamos la estructura en el archivo.bin

   // fprintf(archivo, 'struct sensores', sensor1);      // ESTO ES USADO PARA ARCHIVOS.TXT !!!! 

    fclose(archivo);                                    //cerramos el archivo escrito
}