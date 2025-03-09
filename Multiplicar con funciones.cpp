/*Escriba una función llamada mult() que acepte dos números en punto flotante como parámetros, multiplique esos números y despliegue el resultado*/
#include<iostream>
using namespace std;

void mult(float x, float y){
    float multiplicacion;
    multiplicacion = x * y;
    cout<<x<<" x "<<y<<" = "<<multiplicacion;
}

int main(){
    int n1, n2;
    cout<<"Ingrese un numero: "; cin>>n1;
    cout<<"Ingrese otro numero: "; cin>>n2;
    mult(n1, n2);

    return 0;
}