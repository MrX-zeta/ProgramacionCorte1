#include<iostream>
using namespace std;

int main(){
    char carrera;
    cout<<"Ingrese la carrera: "; cin>>carrera;
    switch(carrera){
        case 'a': cout<<"La carrera es: Administracion"; break;
        case 'b': cout<<"La carrera es: Biomedica"; break;
        case 'c': cout<<"La carrera es contabilidad"; break;
        case 't': cout<<"La carrera es Tecnologias"; break;
        case 'm': cout<<"La carrera es Mecatronica"; break;
        case 's': cout<<"La carrera es Sistemas"; break;
        default: cout<<"La carrera no existe";
    }
    return 0;
}