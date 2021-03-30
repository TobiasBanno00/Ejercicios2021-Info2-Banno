#include <stdio.h>

int main(void) 
{
	float salida=999, valores=0, suma=0, resultado=0;
	int contador=0;

	
	printf(" Ingrese todos los valores con el cual quiere calcular el promedio\n");
	printf(" Al terminar de ingresar todos los entero preciona '999' para calcular el promedio\n");
	
	do
	{
		scanf("%f", &valores);
		if (valores==salida) 
		{
			break;
		}
		contador++;
		suma= suma+valores;
	}while(1);
	
	resultado=suma/contador;
	printf(" El promedio de los numeros ingresados es %f \n",resultado);
	
	return 0;
	
}
