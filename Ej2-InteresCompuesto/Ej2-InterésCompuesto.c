#include <stdio.h>
#include <math.h>


int main()
{
	
	double monto, principal=1000.0, tasa;
	int anio;
	char opcion;
	
	printf("Programa para calcular el monto acumulado de la tasa de interes de un banco\n");
	printf("El monto con el cual se hace el calculo es de $1000\n");
	printf("---------------------------------------------------------------------------\n");
	printf("Seleccione:\n");
	printf("a- tasas de interes del 5 por ciento\n");
	printf("b- tasas de interes del 6 por ciento\n");
	printf("c- tasas de interes del 8 por ciento\n");
	printf("d- tasas de interes del 9 por ciento\n");
	printf("e- tasas de interes del 10 por ciento\n");
	scanf("%c",&opcion);
	
	switch(opcion){
	case 'a': 	tasa=0.05;
				break;
				
	case 'b': 	tasa=0.06;
				break;
	
	case 'c': 	tasa=0.08;
				break;
	
	case 'd': 	tasa=0.09;
				break;
	
	case 'e': 	tasa=0.10;
				break;
	}
	printf("---------------------------------------------------------------------------\n");
	printf("Seleccionaste la opcion %c \n",opcion);
	printf("-------------------------- \n");
	printf("%4s %21s\n","anio","Monto del deposito");
	for (anio= 1; anio <= 10; anio++)
	{
		monto = principal * pow( 1 + tasa, anio );
		printf("%4d %21.2f\n", anio, monto);
	}
	
	return 0;
}
