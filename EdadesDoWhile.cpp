#include<iostream>
using namespace std;

int main(){
    int menores24, mayores46, n, edad, entre25y45, contador;
    menores24 = 0;
    mayores46 = 0;
    entre25y45 = 0;
    contador = 0;
    cout<<"Ingrese la cantidad de personas: "; cin>>n;
    do{
        cout<<"Ingrese la edad: "; cin>>edad;
        if(edad < 24){
            menores24 ++;
        }
        else if(edad > 46){
            mayores46 ++;
        }
        else if(edad >= 25 and edad <= 45){
            entre25y45 ++;
        }
        contador ++;
    }while(contador < n);
cout<<"Menores que 24: "<<menores24<<endl;
cout<<"Mayores que 46: "<<mayores46<<endl;
cout<<"Rango entre 25 y 45: "<<entre25y45<<endl;
    return 0;
}