#include<iostream>
using namespace std;

int main(){
    string nombre1, nombre2, nombre3, nombre4, nombre5;
    int edad1, edad2, edad3, edad4, edad5, MayoresEdad, MenoresEdad;
    MayoresEdad = 0;
    MenoresEdad = 0;
    cout<<"Ingrese su nombre: "; cin>>nombre1;
    cout<<"Ingrese su edad: "; cin>>edad1;
    if(edad1 >= 18){
        MayoresEdad ++;
    }
    else{
        MenoresEdad ++;
    }
    cout<<"Ingrese su nombre: "; cin>>nombre2;
    cout<<"Ingrese su edad: "; cin>>edad2;
    if(edad2 >= 18){
        MayoresEdad ++;
    }
    else{
        MenoresEdad ++;
    }
    cout<<"Ingrese su nombre: "; cin>>nombre3;
    cout<<"Ingrese su edad: "; cin>>edad3;
    if(edad3 >= 18){
        MayoresEdad ++;
    }
    else{
        MenoresEdad ++;
    }
    cout<<"Ingrese su nombre: "; cin>>nombre4;
    cout<<"Ingrese su edad: "; cin>>edad4;
    if(edad4 >= 18){
        MayoresEdad ++;
    }
    else{
        MenoresEdad ++;
    }
    cout<<"Ingrese su nombre: "; cin>>nombre5;
    cout<<"Ingrese su edad: "; cin>>edad5;
    if(edad5 >= 18){
        MayoresEdad ++;
    }
    else{
        MenoresEdad ++;
    }
    cout<<endl;
    cout<<"Mayores de edad: "<<MayoresEdad<<endl;
    cout<<"Menores de edad: "<<MenoresEdad;
    return 0;
}