#include <stdio.h>

 struct complejo 
{
        float real, imaginario;
};

int main(void) 
{
    struct complejo x, *px, cx[100];
     px=&x;
 
    //asignacion de valores a miembros de la estructura
     x.real=1.3;
     x.imaginario=-2.2;

    //asignacion de valores a miembros de la estructura por puntero
     px->real=1.3;
     px->imaginario=-2.2;

    //expresiones para los miembros del elemento decimoctavo del array.
     cx[18].imaginario=12;
     cx[18].real=-10;
}