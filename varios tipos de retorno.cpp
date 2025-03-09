#include<iostream>
using namespace std;

string validarEdad(int);
void imprimir(string, string);

void ingresarDatos(){
    string nombre, estatus;
    int edad;
    cout<<"Ingresa el nombre: "; cin>>nombre;
    cout<<"Ingresa la edad: "; cin>>edad;
    estatus = validarEdad(edad);
    imprimir(nombre, estatus);
}

string validarEdad(int edad){
    string estatus;
    while(edad <= 0){
        cout<<"Ingresa nuevamente la edad: "; cin>>edad;
    }
    if(edad >= 18){
        estatus = "Mayor de edad";
    }
    else{
        estatus = "Menor de edad";
    }
    return estatus; // El valro retornado es de tipo string.
}

void imprimir(string nombre, string estatus){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Estatus: "<<estatus<<endl;
    cout<<"------------------------"<<endl;
}

int main(){
    for(int i = 0; i <= 2; i++){
        ingresarDatos();
    }
}