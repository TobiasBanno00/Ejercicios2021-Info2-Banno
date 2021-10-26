#include <iostream>
#include "../inc/CampoMag.h"
using namespace std;

AcelVelCampoMag::AcelVelCampoMag(float acel, float vel,float campoMag):acelYvel(acel,vel)
{
    
    campoMag_bit=campoMag;

} 
void AcelVelCampoMag::imprimir_campoMag_uT ()
{
    campoMag_uT=(campoMag_bit*4800)/511;
    cout<<"El campo magentico en uT es: "<< campoMag_uT <<"\n";
}