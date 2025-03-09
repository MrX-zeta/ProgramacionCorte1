#include<iostream>
using namespace std;

int EncontrarMayor(int x, int y){
    int Nmayor;
    if(x > y){
        Nmayor = x;
    }
    else{
        Nmayor = y;
    }
    return Nmayor;
}


int main(){
    int n1, n2;
    cout<<"Ingrese un numero: "; cin>>n1;
    cout<<"Ingrese otro numero: "; cin>>n2;
    cout<<"El numero mayor de los ingresados es: "<<EncontrarMayor(n1, n2)<<endl;
    return 0;
}