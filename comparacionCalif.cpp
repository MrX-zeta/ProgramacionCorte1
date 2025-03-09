#include<iostream>
using namespace std;

int main(){
    int calif;
    cout<<"Ingrese la calificacion: "; cin>>calif;
    if(calif == 100){
        cout<<"Excelente";
    }
    else if (calif >= 90 and calif <= 99){
        calif = 90;
    }
    else if (calif >= 80 and calif <= 89){
        calif = 80;
    }
    else if (calif >= 70 and calif <=79){
        calif = 70;
    }
    else if (calif <= 69){
        cout<<"No aprobado";
    }
    
    switch (calif){
        case 90: cout<<"Muy bien"; break;
        case 80: cout<<"Bien"; break;
        case 70: cout<<"Regular"; break;
        default: 
        if (calif < 0 or calif > 100){
            cout<< "Calificacion invalida"; break;
        }
    }
    return 0;
}