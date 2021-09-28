/* Cree una clase Rectángulo con los atributos privados x, y (coordenadas
del punto superior izquierdo), longitud y ancho, cada uno con un valor predeterminado igual a
1. Agregar métodos públicos que permitan:
• Calcular el área y el perímetro del rectángulo.
• Además, crear los métodos establecer (setear valores para x, y, l y a) y obtener (leer
valores x, y, l y a) para los atributos.
• Crear un método que permita saber si un rectángulo está adentro de otro.
• Crear un método que permita calcular el área de la intersección entre 2 rectángulos. */
#include <iostream>
#include "../inc/rectangulo.h"

using namespace std;

int main()
{
    rectangulo uno(2,2,3,3), dos(2,2,4,4);

    cout<<"El area  del rectangulo uno es"<<uno.areaRectangulo()<<"\n";
    cout<<"El area  del rectangulo dos es"<<dos.areaRectangulo()<<"\n";
    cout<<"El perimetro  del rectangulo uno es"<<uno.perimetroRectangulo()<<"\n";
    cout<<"El perimetro  del rectangulo dos es"<<dos.perimetroRectangulo()<<"\n";

    
}

