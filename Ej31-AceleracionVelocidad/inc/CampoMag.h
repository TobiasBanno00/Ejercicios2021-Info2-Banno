#include "acelYvel.h"
#ifndef CampoMag_H
#define CampoMag_H

class AcelVelCampoMag: public acelYvel
{
    public: 
    AcelVelCampoMag(float=0,float=0,float=0);
    void imprimir_campoMag_uT() ;

    private:
    float campoMag_bit;
    float campoMag_uT;
};
#endif
