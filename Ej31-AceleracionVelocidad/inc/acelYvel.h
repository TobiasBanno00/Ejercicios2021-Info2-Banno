#ifndef acelYvel_H
#define acelYvel_h

class acelYvel
{
    public:
    acelYvel(float=0,float=0);
     void imprimir_acel_g();
    void imprimir_vel_ms();
   

    protected:
    float vel_bit, acel_bit, acel_g,vel_ms;
};
#endif