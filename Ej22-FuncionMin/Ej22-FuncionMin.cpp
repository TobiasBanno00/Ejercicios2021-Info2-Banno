/* Escriba un programa que utilice una función llamada min, para determinar el menor de dos argumentos. 
La función debe tener los argumentos por defecto 3 y 5.Sobrecargue la función 
min para que soporte los tipos de datos int y float. */

#include<iostream>

using namespace std;

int minn (int n1=3, int n2=5);
float minn (float n1=3, float n2=5);

int main()
{
    cout << "Float: " << minn(float (2.33), float (6.33));

    cout << "Int: " << minn(1, 2);

}

int minn (int n1=3, int n2=5)
{
    if (n1<n2)          
    {
        return n1;
    }

    else 
    {
        return n2;
    }
}

float minn (float n1=3, float n2=5)
{
        if (n1<n2)
    {
        return n1;
    }

    else 
    {
        return n2;
    }
}