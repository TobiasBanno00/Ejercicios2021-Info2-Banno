/* Definir e implementar una clase Complejo para realizar aritmética con
números complejos de la forma p + i * q que posean los siguientes elementos públicos y
privados:
Variables miembro privadas:
• p y q - del tipo double, que representan la parte real e imaginaria del número.
Métodos miembro públicos:
• Constructor que permita inicializar los valores de la parte real y la imaginaria.
• Constructor que inicialice los valores por defecto.
• Suma de números complejos.
• Resta de números complejos.
• Impresión del número complejo en formato (p,q).
Crear un programa que utilice dicha clase y pruebe todas las funcionalidades */

#include <iostream>
#include "../inc/complejo.h"

using namespace std;

int main(){

	complejo n1 (2,3), n2 (5,7),n3;
	
    cout << "El numero 1 es: ";
	n1.imprimirComplejo();
    cout << "El numero 2 es: ";
	n2.imprimirComplejo();
    cout << "La suma es: ";
	n3 = n1.suma(n2);
	n3.imprimirComplejo();
	cout << "La resta es: ";
    n3 = n1.resta(n2);
	n3.imprimirComplejo();

    return 0;
}

