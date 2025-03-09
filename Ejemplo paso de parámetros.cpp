#include<iostream>
#include<cmath>
using namespace std;

void CalcularHipotenusa(int opuesto, int adyacente){
    float h;
    h = sqrt(opuesto * opuesto + adyacente * adyacente); //h = sqrt(opuesto * opuesto + adyacente * adyacente);
    cout<<"La hipotenusa del triangulo es: "<<h;
}

int main(){
    int co;
    float ca;
    cout<<"Hipotenusa de un triangulo rectangulo"<<endl;
    cout<<"Escriba la longitud de cateto adyacente: "; cin>>ca;
    cout<<"Escriba la longitud del cateto opuesto: "; cin>>co;
    CalcularHipotenusa(co, ca); //CalcularHipotenusa(co, ca);
}