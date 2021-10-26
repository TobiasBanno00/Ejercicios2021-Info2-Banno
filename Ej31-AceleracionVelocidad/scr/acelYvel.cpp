#include <iostream>
#include "../inc/acelYvel.h"
using namespace std;


acelYvel::acelYvel (float acel, float vel)
{
    acel_bit=acel;
    vel_bit=vel;
    
}

void acelYvel::imprimir_acel_g ()
{
    acel_g= (acel_bit*5)/1024;
    cout<<"La aceleracion en g es: "<< acel_g<<"\n";
}

void acelYvel::imprimir_vel_ms ()
{
    vel_ms=(vel_bit*1000)/4095;
    cout<<"La velocidad en m/s es: "<< vel_ms <<"\n";
}
