
/* Escriba una función nombrada funpot() que eleve un número entero que se le transmita a una potencia en número entero positivo y despliegue el resultado.
El número entero positivo deberá ser el segundo valor transmitido a la función */
#include<iostream>
using namespace std;

void funpot(int x, int y){
    long potencia = 1;
    for(int i = 1; i <= y; i++){
        potencia *= x;
    }
    cout<<x<<"^"<<y<<" = "<<potencia;
}

int main(){
    int base, exp;
    cout<<"Ingrese la base: "; cin>>base;
    cout<<"Ingrese el exponente: "; cin>>exp;
    funpot(base, exp);
    return 0;
}