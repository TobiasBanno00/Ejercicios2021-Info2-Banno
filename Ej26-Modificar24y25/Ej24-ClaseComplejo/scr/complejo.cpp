#include <iostream>
#include "../inc/complejo.h"

using namespace std;

complejo::complejo ()
{
	p = 4;
	q = 5;
}

complejo::complejo (double real, double imaginario)
{
	p = real;
	q = imaginario;
}

complejo &complejo::suma(complejo a)
{	
	complejo suma;
	suma.p = p + a.p;
	suma.q = q + a.q; 
	return *this;
}
complejo &complejo::resta(complejo a)
{	
	complejo resta;
	resta.p = p - a.p;
	resta.q = q - a.q; 
	return *this;
}

 void complejo::imprimirComplejo() const
{
	cout<< p << " + ("<< q << "i)\n";
}