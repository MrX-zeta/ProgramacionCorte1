#include<iostream>
using namespace std;

// Sacar el valor absoluto de un número

template<class TIPODNUMERO>
void MostrarAbs(TIPODNUMERO numero){
    if(numero < 0){
        numero *= -1;
    }
    cout<<"El valor absoluto del numero ingresado es: "<<numero;
}

int main(){
    float num;
    cout<<"Ingrese un numero: "; cin>>num;
    MostrarAbs(num);
    return 0;
}