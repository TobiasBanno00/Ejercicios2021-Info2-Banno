#ifndef COMPLEJO_H
#define COMPLEJO_H
#include <iostream>

class complejo
{
    public:
    complejo();								     //Constructor, valores predeterminados
	complejo (double real, double imaginario);   //guardar los valores de real e imaginario en p y q

    complejo &suma(complejo);
    complejo &resta(complejo);
	void imprimirComplejo() const ;

    private:
	double p,q; //p  real, q imaginario
};
#endif