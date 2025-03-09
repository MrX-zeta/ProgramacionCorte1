#include<iostream>
using namespace std;

int main(){
    int base, exponente1, exponente2, resultado1 = 1, exp;
    double resultado2 = 1, numerador, denominador;
    cout<<"Ingrese la base: "; cin>>base;
    cout<<"Ingrese el primer exponente: "; cin>>exponente1;
    cout<<"ingrese el segundo exponente: "; cin>>exponente2;
    for(int i = 1; i <= exponente1 * exponente2; i++){
        resultado1 *= base;
    }
    cout<<"El resultado es: "<<resultado1<<endl;
    cout<<"Ingrese el valor del numerador: "; cin>>numerador;
    cout<<"Ingrese el valor del denominador: "; cin>>denominador;
    cout<<"Ingrese el valor del exponente: "; cin>>exp;
    for(int j = 1; j <= exp; j++ ){
        resultado2 *= (numerador/denominador);
    } 
    cout<<"El reslutado es: "<<resultado2;
    return 0;
}