/* Ej21-PasoReferencia:Escriba un programa completo en C++ con las dos funciones alternativas especificadas abajo, 
en donde cada una de ellas simplemente triplica la variable cuenta definida en main. Después compare y contraste los dos métodos.
 Estas dos funciones son:
 a)La función tripleLlamadaPorValor que pasa una copia de cuenta por medio de una llamada por valor, que triplica la copia y devuelve el nuevo valor
 b)La función triplePorReferencia que pasa cuenta con una verdadera llamada por referencia, a través de un parámetro de referencia, 
 y que triplica la copia original de cuenta por medio de su alias (es decir, el parámetro de referencia). */

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

void tripleLlamadaPorValor(float num);
void triplePorReferencia(float &num);

int main()
{
    float numero=2.5;

    tripleLlamadaPorValor(numero);
    triplePorReferencia(numero);

}
void tripleLlamadaPorValor(float num)
{
    num= num*3;
    cout<< "Llamado por valor, num: "<<num<<"\n";
}

void triplePorReferencia(float &num)
{
    num= num*3;
    cout<< "Llamado por referencia, num: "<<num<<"\n";
}