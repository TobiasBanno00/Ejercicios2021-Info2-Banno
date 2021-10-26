/* Ej31-AceleracionVelocidad:
Supongamos que tenemos un sensor que mide aceleración y velocidad. La aceleración que
mide el sensor es siempre positiva y se encuentra codificada como un entero entre 0 y 2¹⁰-1
(1023). Un 0 indica que no hay aceleración y un 1023 indica el máximo de aceleración
soportado por el sensor que es de 5g, donde g es la aceleración de la gravedad.
La velocidad que mide el sensor es siempre positiva y se encuentra codificada como un entero
entre 0 y 2¹²-1. Un 0 indica que no hay velocidad y el valor máximo que puede medir es de
1000m/s.
 a) Crear una clase para almacenar ambos enteros.
 b) Crear un método que imprima el valor de la aceleración en g.
 c) Crear un método que devuelva el valor de la velocidad en m/s.
 d) Crear un programa que use la clase y sus métodos creados en los puntos b y c.
 Herencia:
 e) Usando herencia para definir una nueva clase que agregue un atributo a la clase para
almacenar la medición del campo magnético, dicha medición es siempre positiva y se
encuentra codificada como un valor entre 0 y 511. Un 0 representa 0 uT (micro Tesla) y un 511
representa 4800 uT.
 f) Crear un método que imprima el valor del campo magnético en uT.
 g) Crear un programa que use el método creado en f. */

#include <iostream>
#include "../inc/CampoMag.h"
//#include "../inc/acelYvel.h"


struct valoresSensor
{
    float aceleracion;
    float velocidad;
    float campoMagnetico;
    
};

int main()
{   
    valoresSensor valoresS1={980,1954,203};

    //acelYvel sensor1(valoresS1.aceleracion,valoresS1.velocidad);
    AcelVelCampoMag sensor1(valoresS1.aceleracion,valoresS1.velocidad,valoresS1.campoMagnetico);
    sensor1.imprimir_acel_g();
    sensor1.imprimir_vel_ms();
    sensor1.imprimir_campoMag_uT();



    return 0;
};