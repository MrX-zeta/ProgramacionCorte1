/* Escriba una función llamada al_cuadrado() que calcule el cuadrado del valor que se le transmite y despliegue el resultado.
La función deberá ser capaz de elevar al cuadrado números flotantes */

#include<iostream>
using namespace std;
float num;
void al_cuadrado(float x){
    float cuadrado;
    cuadrado = x * x;
    cout<<num<<"^2 = "<<cuadrado;
}


int main(){
    cout<<"Ingrese un numero para calcular su cuadrado: "; cin>>num;
    al_cuadrado(num);
    return 0;
}