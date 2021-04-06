#include <stdio.h>

int main()
{

//a)
long valor1=200000,valor2, *ptrL;

//b
*ptrL=valor1;

//c
printf("El valor que apunta el puntero es %ld\n",*ptrL);

//d
valor2=*ptrL;

//e
printf("El valor de la variable valor2 es %ld\n",valor2);

//f
printf("La direccion de valor1 es %p\n ",valor1);

//g
printf("La direccion del puntero es %p\n ", *ptrL);

// valor1 misma dirección que *ptrL 
return 0;

}
