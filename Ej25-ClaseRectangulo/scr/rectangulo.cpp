#include <iostream>
#include "../inc/rectangulo.h"

rectangulo::rectangulo(float xP,float yP,float largo,float alto )
{
    setearX(xP);
    setearY(yP);
    setearL(largo);
    setearA(alto);
}

void rectangulo::setearL(float largo){l=largo;}
void rectangulo::setearA(float alto){a=alto;}
void rectangulo::setearX(float xP){x=xP;}
void rectangulo::setearY(float yP){y=yP;}

float rectangulo::obtenerL(){return l;}
float rectangulo::obtenerA(){return a;}
float rectangulo::obtenerX(){return x;}
float rectangulo::obtenerY(){return y;}

float rectangulo::areaRectangulo(){return(a*l);};
float rectangulo::perimetroRectangulo(){return (a*2+l*2);}

bool rectangulo::dentro(rectangulo rect)         
{
    if(areaRectangulo()>rect.areaRectangulo())
	{
		return 0;
	}
	else
	{
		if (x < rect.x || y < rect.y || (x+l)>(rect.x+rect.l) || (y+a)>(rect.y+rect.a))
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
}

float rectangulo::areaInter(rectangulo rect)        //se sacó del programa del profe
{
    float ladoX, ladoY;

	if((x+l)<=rect.x || (x)>= (rect.x+rect.l) || (y+a)<=rect.y || (y)>= (rect.y+rect.a))
	{
		return 0;
	}
	else
	{
		if(y<=rect.y && (y+a)<=(rect.y+rect.a))
		{
			ladoY = y + a - rect.y;
		}
		else if(y>=rect.y && (y+a)>=(rect.y+rect.a))
		{
			ladoY = rect.y + rect.a - y;
		}
		else if(a<rect.a)
		{
			ladoY = a;
		}
		else
		{
			ladoY=rect.a;
		}
		
		if(x<=rect.x && (x+l)<=(rect.x+rect.l))
		{
			ladoX = x + l - rect.x;
		}
		else if(x>=rect.x && (x+l)>=(rect.x+rect.l))
		{
			ladoX = rect.x + rect.l - x;
		}
		else if(l<rect.l)
		{
			ladoX = l;
		}
		else
		{
			ladoX=rect.l;
		}
		return (ladoX*ladoY);
	}

} 