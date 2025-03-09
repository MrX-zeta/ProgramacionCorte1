#include<iostream>
using namespace std;

int main(){
    int calificacion;
    cout<<"Ingresa la calificacion: "; cin>>calificacion;
    if(calificacion >= 70){
        cout<<"Aprobado";
    }
    else {
        cout<<"Reprobado";
    }
    return 0;
}