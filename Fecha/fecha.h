#include<iostream>

using namespace std;


struct Mes 
{
    char nombre[11];
};

Mes meses[12] = 
{
    {"Enero"}, {"Febrero"}, {"Marzo"}, {"Abril"},
    {"Mayo"}, {"Junio"}, {"Julio"}, {"Agosto"},
    {"Septiembre"}, {"Octubre"}, {"Noviembre"},
    {"Diciembre"},
};
class Fecha 
{
    int dia;
    int mes;
    int anio;
    public:
    void setear(int dia_, int mes_, int anio_);
    void imprimir();
};

void Fecha::imprimir() 
{
    cout << dia << " de " << meses[mes-1].nombre<< " del " << anio << endl;
};

void Fecha::setear(int dia_, int mes_, int anio_)
{
     dia=dia_;
     mes=mes_;
    anio=anio_;
        
} 
