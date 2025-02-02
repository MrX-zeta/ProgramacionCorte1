#include<iostream>
using namespace std;

int main(){
    int num1, num2;
    cout<<"Ingrese un numero: "; cin>>num1;
    cout<<"Ingrese otro numero: "; cin>>num2;
    if(num1 == num2){
        cout<<"Los numeros ingresados son iguales ";
    }
    else if(num1 > num2){
        cout<<"El numero mayor es: "<<num1<<" El numero menor es: "<<num2;
    }
    else{
        cout<<"El numero mayor es: "<<num2<<" El numero menor es: "<<num1;
    }
    return 0;
}