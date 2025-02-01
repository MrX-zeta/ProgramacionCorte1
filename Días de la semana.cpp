#include<iostream>
using namespace std;

int main(){
    int dia;
    cout<<"Ingrese el numero de dia: "; cin>>dia;
    switch(dia){
        case 1: cout<<"El dia "<<dia<<" es Lunes"; break;
        case 2: cout<<"El dia "<<dia<<" es Martes"; break;
        case 3: cout<<"El dia "<<dia<<" es Miercoles"; break;
        case 4: cout<<"El dia "<<dia<<" es Jueves"; break;
        case 5: cout<<"El dia "<<dia<<" es Viernes"; break;
        case 6: cout<<"El dia "<<dia<<" es Sabado"; break;
        case 7: cout<<"El dia"<<dia<<" es Domingo"; break;
        default: cout<<"El dia no existe"; break;
    }
    return 0;
}