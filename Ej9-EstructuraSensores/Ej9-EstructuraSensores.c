#include <stdio.h>

 struct sensores
{
        char tipoSensor;
        int valorSensor;
        unsigned long tiempo;
};

int main(void) 
{
    struct sensores x;

    printf("Tamanio de memoria que ocupa la variable x: %d\n", sizeof(x));
}