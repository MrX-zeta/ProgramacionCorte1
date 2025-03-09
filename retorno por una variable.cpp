#include<iostream>
using namespace std;

int sumar(int num1, int num2){
    int suma; //variable local
    suma = num1 + num2;
    return suma;
}


int main(){
    int n1, n2, resultado; //variables locales
    cout<<"Ingresa el primer numero: "; cin>>n1;
    cout<<"Ingresa el segundo numero: "; cin>>n2;
    resultado = sumar(n1, n2);
    cout<<"La suma es: "<<resultado;
    return 0;
}