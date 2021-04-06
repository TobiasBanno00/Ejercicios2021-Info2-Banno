#include <stdio.h>
/*Escriba las instrucciones para llevar a cabo cada una de las siguientes tareas:
	a) Despliegue el valor del s�ptimo elemento del arreglo de caracteres f.
	b) Introduzca un valor en el elemento 4 del arreglo de punto flotante con un solo sub�ndice, b.
	c) Inicialice en 8 cada uno de los 5 elementos del arreglo entero g.
	d) Sume los elementos del arreglo de punto flotante c, el cual contiene 100 elementos.
	e) Copie el arreglo a en la primera porci�n del arreglo b. Suponga que double a[ 11 ], b[ 34 ];
f) Determine y despliegue*/
void septimovalor();
void introducirvalor();
void inicializar();
void sumaarreglo();
void copiararreglo();

int main(void)
{
char opcion;
	
printf("Seleccione:\n");
printf("a- Desplegar el valor del s�ptimo elemento del arreglo de caracteres f\n");
printf("b- Introduzca un valor en el elemento 4 del arreglo de punto flotante con un solo sub�ndice, b\n");
printf("c- Inicialice en 8 cada uno de los 5 elementos del arreglo entero g\n");
printf("d- Sume los elementos del arreglo de punto flotante c, el cual contiene 100 elementos.\n");
printf("e- Copie el arreglo a en la primera porci�n del arreglo b. Suponga que double a[ 11 ], b[ 34 ]\n");
scanf("%c",&opcion);

switch (opcion)
{
case 'a': 	
	septimovalor();

break;

case 'b': 	
	introducirvalor();
break;

case 'c': 	
	inicializar();
break;

case 'd': 	
	sumaarreglo();
case 'e': 
	copiararreglo();
break;
}
}

void septimovalor()
{
	char  f[30];
	printf("Ingrese una palabra, minimo 10 caracteres\n");
	scanf("%s",f);
	printf("El septimo valor del arreglo es %c\n",f[6]);
}

void introducirvalor()
{
	float  b[10];
	printf("Ingrese un numero y sera guardado en el 4 elemento del arreglo\n");
	scanf("%f",&b[4]);
	printf("El valor ingresado es %f\n",b[4]);
}

void inicializar()
{
	int  g[5]={8,8,8,8,8};
	int i;
	
	printf("Los 5 elementos del arreglo valen 8 \n");
	for (i= 0; i < 5; i++)
	{
		printf("Posici�n: %d   valor del arreglo: %.0d\n",i,g[i]);
	}

}
void sumaarreglo()
{
	int arreglo[100], sumatotal, i;
	for (i= 0; i < 100; i++)
	{
		sumatotal= sumatotal+arreglo[i];
	}
}
void copiararreglo()
{
}
				 
