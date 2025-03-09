#include<iostream>
using namespace std;

int main(){
    string nombre;
    int edad, total, Mayores, Menores;
    Mayores = 0;
    Menores = 0;
    cout<<"Ingrese la cantidad de personas: "; cin>>total;
    for(int i = 1; i <= total; i++){
        cout<<"Ingrese su nombre: "; cin>>nombre;
        cout<<"Ingrese su edad: "; cin>>edad;
        if(edad>=18){
            Mayores ++;
        }
        else{
            Menores ++;
        }
    }
    cout<<""<<endl;
    cout<<"Mayores de edad: "<<Mayores<<endl;
    cout<<"Menores de edad: "<<Menores<<endl;
    return 0;
}