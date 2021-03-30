#include <stdio.h>

int main(void) 
{
	char valores;
	float suma=0, resultado=0;
	int contador=0;
	
	
	printf(" Ingrese todos los valores con el cual quiere calcular el promedio\n");
	printf(" Al terminar de ingresar todos los entero preciona 'P' para calcular el promedio\n");
	
	do
	{
		scanf("%s", &valores);
		if (valores=='p'||valores=='P') 
		{
			
			break;
		}
		contador++;
		suma= suma+(valores - 48);
	}while(1);
	
	resultado=suma/contador;
	printf(" El promedio de los numeros ingresados es %f \n",resultado);
	
	return 0;
	
}
