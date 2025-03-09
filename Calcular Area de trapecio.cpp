// Realizar un programa que calcule el área de un trapecio. Utilizar funciones y pase de parámetros.

#include<iostream>
using namespace std;

void CalcularArea(float b1, float b2, float h){
    float Area;
    Area = (b1 + b2)*h / 2;
    cout<<"El area es: "<<Area;
}

int main(){
    float B, b, Altura;
    cout<<"Ingrese el valor de la base mayor: "; cin>>B;
    cout<<"Ingrese el valor de la base menor: "; cin>>b;
    cout<<"Ingrese el valor de la altura: "; cin>>Altura;
    CalcularArea(B, b , Altura);
    return 0;
}