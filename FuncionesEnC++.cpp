#include<iostream>
using namespace std;
float n1, n2, n3, n4;

//ejemplo de una función:
void sumar(){
    int suma;
    suma = n1 + n2 + n3 + n4;
    cout<<"La suma de los numeros es: "<<suma<<endl;
}

void restar(){
    int resta;
    resta = n1 - n2 - n3 - n4;
    cout<<"La resta es: "<<resta<<endl;
}

void multiplicar(){
    int multiplicacion;
    multiplicacion = n1 * n2 * n3 * n4;
    cout<<"La multiplicacion es: "<<multiplicacion<<endl;
}

void dividir(){
    double division;
    division = (n1 / n2) / (n3 / n4);
    cout<<"La division es: "<<division<<endl;
}

int main(){
    cout<<"Ingrese el primer numero: "; cin>>n1;
    cout<<"Ingrese el segundo numero: "; cin>>n2;
    cout<<"Ingrese el tercer numero :"; cin>>n3;
    cout<<"Ingrese el cuarto numero: "; cin>>n4;
    sumar();
    restar();
    multiplicar();
    dividir();

    return 0;
}