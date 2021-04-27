#include <stdio.h>

struct cliente {
        char apellido [15];
        char nombre[15];
        int numeroCliente;
        struct{
            int numeroTelefonico;
            char direccion [50];
            char ciudad[15];
            char estado[3];
            int codigoPostal;
        }personal;
    };
int main(void) 
{   
    struct cliente registroCliente, *ptrCliente;
    ptrCliente= &registroCliente;
// a)
    printf("Apellido ");
    scanf("%s",&registroCliente.apellido);
    printf("Su apellido guardado en registro es %s \n",registroCliente.apellido);

// b)

    printf("Su apellido apuntado es %s \n",ptrCliente->apellido);

// c) 

    printf("Nombre ");
    scanf("%s",&registroCliente.nombre);
    printf("Su nombre guardado en registro es %s \n",registroCliente.nombre);

// d) 

    printf("Su nombre apuntado es %s \n",ptrCliente->nombre);

// e)

    printf("Numero cliente: ");
    scanf("%dgc",&registroCliente.numeroCliente);
    printf("Su numero cliente en registro es %d \n",registroCliente.numeroCliente);

// f) 

    printf("Su numero cliente apuntado es %d \n",ptrCliente->numeroCliente);

// g)
    printf("Numero telefonico: ");
    scanf("%d",&registroCliente.personal.numeroTelefonico);
    printf("Su numero telefonico en registro es %d \n",registroCliente.personal.numeroTelefonico);
// h)

 printf("Su numero telefonico apuntado es %d \n",ptrCliente->personal.numeroTelefonico);

 // i)
     printf("Direccion: ");
    scanf("%s",&registroCliente.personal.direccion);
    printf("Su numero telefonico en registro es %s \n",registroCliente.personal.direccion);
// j)

 printf("Su numero direccion apuntada es %s \n",ptrCliente->personal.direccion);
	return 0;

// etc....
}
