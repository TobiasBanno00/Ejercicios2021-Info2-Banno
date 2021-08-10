#include<iostream>

//unsigned namespace std;

using std::cout;
using std::cin;
using std::endl;

int main()
{
    char nombre[30];
    char domicilio[30];
    char ciudad[30];
    char provincia[20];
    int codigopostal;

    cout<<"ingrese su nombre"<<"\n";
    cin>>nombre;
    cout<<"ingrese su domicilio"<<"\n";
    cin>>domicilio;
    cout<<"ingrese su ciudad"<<"\n";
    cin>>ciudad;
    cout<<"ingrese su provincia"<<"\n";
    cin>>provincia;
    cout<<"ingrese su codigo postal"<<"\n";
    cin>>codigopostal;

    cout<<"su nombre es:"<<nombre<<"\n";
    cout<<"su domicilio es:"<<domicilio<<"\n";
    cout<<"su ciudad es: "<<ciudad<<", provincia de:"<<provincia<<", codigo postal:"<<codigopostal<<"\n";

    return 0;

}




