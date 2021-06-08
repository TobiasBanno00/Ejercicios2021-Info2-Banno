#include <stdio.h>
#include <stdint.h>
struct sensores
{
        uint32_t tiempo;           //Tiempo transcurrido
        uint16_t valorSensor;           //Valor de sensor
         uint8_t tipoSensor;            //Tipo de sensor leido
}sensor1,*ptrsensor;                //le damos valores cualquiera a la estructura, esto lo podriamos tmb hacer con un scanf o con un sensor

int main(void)
{
    ptrsensor=&sensor1;
    FILE *archivo;                       //declaración puntero archivo
    archivo=fopen("archivo.dat","r");    // leemos un archivo.bin

    if(archivo == NULL) {
    printf("Error al abrir archivo!");
    return -1;
    }

    fread(ptrsensor, sizeof(struct sensores), 1, archivo);        //guardamos lo leido en nuestra estructura ya creada

   // fscanf(archivo, 'struct sensores', sensor1);      // ESTO ES USADO PARA ARCHIVOS.TXT !!!! 

    fclose(archivo);                                    //cerramos el archivo escrito

    printf("NOMBRE DL SENSOR: %c, VALOR DE SENSOR: %d, TIEMPO DEL SENSOR: %d \n", sensor1.tipoSensor,sensor1.valorSensor,sensor1.tiempo);
    return 0;
}