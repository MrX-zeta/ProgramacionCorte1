/*  Algunas funciones cal ulan datos y devuelven valroes, otras funciones no.
Una función que no devuelve ningún valor, se denomina con la palabra reservada void, para el caso de lenguaje C++.
Una función que devuelve un valor se denomina con el tipo de dato de ese valor (int, gloat, string, etc). Estas funciones devuelven el valor al entorno o función que le llamó.
Al igual que los parámetros, los retornos de valor son los medios de comunicación entre funciones.

*/

#include<iostream>
using namespace std;

float sumar(float num1, float num2){
    float suma; //variable local
    suma = num1 + num2;
    return suma;
}

int main(){
    float n1, n2; //variables locales
    cout<<"Ingresa el primer numero: "; cin>>n1;
    cout<<"Ingresa el segundo numero: "; cin>>n2;
    cout<<"La suma es: "<<sumar(n1, n2); // El valor retornado es la suma de n1 y n2
    return 0;
}