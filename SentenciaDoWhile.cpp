#include<iostream>
using namespace std;

int main(){
    int i, numero, suma = 0;
    
    do{
        cout<<"numero: "; cin>>numero;
        suma += numero;
        cout<<"Desea sumar otro numero, 1=si    0=no"<<endl; cin>>i;
    }while(i != 0);
    cout<<"Total: "<<suma;
    return 0;
}