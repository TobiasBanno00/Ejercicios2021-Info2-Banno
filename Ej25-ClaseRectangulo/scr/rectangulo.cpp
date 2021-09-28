#include "../inc/rectangulo.h"

rectangulo::rectangulo(float xP,float yP,float largo,float alto )
{
    setearX(xP);
    setearY(yP);
    setearL(largo);
    setearA(alto);
}

void rectangulo::setearL(float largo){l=largo;};
void rectangulo::setearA(float alto){a=alto;};
void rectangulo::setearX(float xP){x=xP;};
void rectangulo::setearY(float yP){y=yP;};

float rectangulo::obtenerL(){return l;};
float rectangulo::obtenerA(){return a;};
float rectangulo::obtenerX(){return x;};
float rectangulo::obtenerY(){return y;};

float rectangulo::areaRectangulo(){return(a*l);};
float rectangulo::perimetroRectangulo(){return (a*2+l*2);};

bool rectangulo::dentro(rectangulo rect)
{

};

float rectangulo::areaInter(rectangulo rect)
{

};