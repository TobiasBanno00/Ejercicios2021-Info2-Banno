/*  Escriba la función min del ejercicio anterior en formato de plantilla. 
Evalúe el programa utilizando un par de enteros, uno de caracteres y uno de punto flotante. */

#include<iostream>

using namespace std;

template < class menor >
menor minn (menor v1, menor v2)
{
    if(v1 <= v2){
        return v1;
    }
    else{
        return v2;
    }
}


int main()
{
  int entero[2]={23,54};
  float flotante[2]={23.2,54.5};
  char caracter[2]={'d','a'};

    cout<<"El menor de los enteros es: "<<minn(entero[0],entero[1])<<endl;
    cout<<"El menor de los flotantes es: "<<minn(flotante[0],flotante[1])<<endl;
    cout << "El menor de los caracteres es " << minn(caracter[0], caracter[1]) << endl;
  

}