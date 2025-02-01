/* Realizar
un programa en C++,
que calcule la suma, la resta, multiplicación y división de 2 números. Guiarse
del ejemplo realizado en clase.*/

#include<iostream>
using namespace std;

int main(){
    float suma, resta, mult, div, num1, num2;
    cout<<"Ingrese un numero: "; cin>>num1;
    cout<<"Ingrese otro numero: "; cin>>num2;
        if(num2 == 0){
        cout<<"Para poder hacer la division, el divisor debe ser mayor a 0";
    }
    suma = num1 + num2;
    resta = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;
    cout<<"El resultado de la suma es: "<<suma<<endl;
    cout<<"El resultado de la resta es: "<<resta<<endl;
    cout<<"El resultado de la multiplicacion es: "<<mult<<endl;
    cout<<"El resultado de la division es: "<<div<<endl;
    return 0;
}