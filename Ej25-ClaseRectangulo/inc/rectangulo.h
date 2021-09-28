#ifndef RECTANGULO_H
#define RECTANGULO_H

class rectangulo
{
    public:

    rectangulo(float,float,float,float);

    float areaRectangulo ();
    float perimetroRectangulo ();

    void setearA(float);
    void setearL(float);
    void setearX(float);
    void setearY(float);

    float obtenerA();
    float obtenerL();
    float obtenerX();
    float obtenerY();

    bool  dentro(rectangulo);
    float areaInter(rectangulo);
    
    private:
    
    float x,y,l,a;
};
#endif