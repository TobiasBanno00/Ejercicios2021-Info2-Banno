#ifndef RECTANGULO_H
#define RECTANGULO_H
#include <iostream>

class rectangulo
{
    public:

    rectangulo(float,float,float,float);

    rectangulo &areaRectangulo ();
    rectangulo &perimetroRectangulo();

    rectangulo &setearA(float);
    rectangulo &setearL(float);
    rectangulo &setearX(float);
    rectangulo &setearY(float);

    rectangulo &obtenerA();
    rectangulo &obtenerL();
    rectangulo &obtenerX();
    rectangulo &obtenerY();

    bool  dentro(rectangulo)const;
    float areaInter(rectangulo)const;
    
    private:
    
    float x,y,l,a;
};
#endif

