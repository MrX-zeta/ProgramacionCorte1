#include<iostream>
using namespace std;

string nombre;
int matricula;

void SolicitarDatosEstudiante(){
    cout<<"Ingresa tu nombre: "<<endl; cin>>nombre;
    cout<<"Ingresa tu matricula: "<<endl; cin>>matricula;
}

int main(){
    SolicitarDatosEstudiante();
    cout<<"UPCHIAPAS"<<endl;
    cout<<"Hola "<<nombre<<" Tu matricula es: "<<matricula;
    return 0;
}