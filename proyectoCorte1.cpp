#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float a, b, c, angulo, perimetro;
    cout<<"Ingrese el valor de a: "; cin>>a;
    while(a<=0){
        cout<<"El valor de a debe ser mayor a 0. Ingrese nuevamente el valor de a: "; cin>>a;
    }
    cout<<"Ingrese el valor de b: "; cin>>b;
    while(b<=0){
        cout<<"El valor de b debe ser mayor a 0. Ingrese nuevamente el valor de b: "; cin>>b;
    }
    c = sqrt(pow(a, 2) + pow(b, 2));
    c = round(c * 100) / 100;
    cout<<"El valor de la hipotenusa es: "<<c<<endl;
    perimetro = a+b+c;
    cout<<"El perimetro del triangulo es: "<<perimetro<<endl;
    angulo = atan(a/b) * (180.0 / M_PI); //Conversion de radianes a grados
    angulo = round(angulo * 100) / 100;
    cout<<"El angulo del triangulo en grados es: "<<angulo<<" grados"<<endl;
    if(a == b){
        cout<<"El triangulo es isosceles"<<endl;
    }
    else{
        cout<<"El triangulo no es isosceles"<<endl;
    }
    
    if (a * a + b * b == c * c){
        cout << "Este es un triangulo rectangulo."<<endl;
    } 
    else {
        cout << "Este NO es un triangulo rectangulo."<<endl;
    }
    return 0;
}