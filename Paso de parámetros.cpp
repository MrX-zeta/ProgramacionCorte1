#include<iostream>
using namespace std;

/* Un parámetro son declarados en la cabecera de una función, entre los paréntesis. Contienen valores que son pasados a la función.
Los parámetros se pasan "por valor", es decir, en cada llamada a la función se genera una copia de los valores de los parámetros actualres, que se almacenan en variables templorales
mientras dure la ejecución de la función.
*/

void sumar(int num1, int num2){ // El valor de la variable n1 se copia a la variable num1, lo mismo para la variable n2.
    int suma;
    suma = num1 + num2;
    cout<<"La suma es: "<<suma;
}

int main(){
    int n1, n2;
    cout<<"Dame el primer numero: "; cin>>n1;
    cout<<"Dame el segundo numero: "; cin>>n2;
    sumar(n1, n2); // llamada de la función con paso de parámetros.
    return 0;
}

/*
float iddentificador3(){
    float valor;
    instrucciones

    return valor;
}
*/