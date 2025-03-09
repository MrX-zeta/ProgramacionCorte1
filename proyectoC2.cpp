//Programa hecho por Montoya N. Eduardo y Ruiz P. Brian Luis
#include<iostream>
#include<cmath>
using namespace std;

float calcularHipotenusa(float cateto_o, float cateto_a){
    float hipotenusa;
    hipotenusa = sqrt(pow(cateto_o, 2) + pow(cateto_a, 2));
    hipotenusa = round(hipotenusa * 100) / 100;
    return hipotenusa;    
}

float calcularPerimetro(float cateto_o, float cateto_a){
    float perimetro;
    perimetro = cateto_o + cateto_a + calcularHipotenusa(cateto_o, cateto_a);
    return perimetro;
}

float calcularAngulo(float cateto_o, float cateto_a){
    float angulo;
    angulo = atan(cateto_o/cateto_a) * (180.0 / 3.1416);
    return angulo;
}

int main(){
    float a, b;
    cout<<"Ingrese el valor del cateto opuesto: "; cin>>a;
    while(a<=0){
        cout<<"El valor del cateto opuesto debe ser mayor a 0. Ingrese nuevamente el valor: "; cin>>a;
    }
    cout<<"Ingrese el valor del cateto adyacente: "; cin>>b;
    while(b<=0){
        cout<<"El valor del cateto adyacente debe ser mayor a 0. Ingrese nuevamente el valor: "; cin>>b;
    }
    cout<<"El valor de la hipotenusa es: "<<calcularHipotenusa(a, b)<<endl;
    cout<<"El valor del perimetro es: "<<calcularPerimetro(a, b)<<endl;
    cout<<"El valor de uno de los angulos excluyendo el de 90, es: "<<calcularAngulo(a, b)<<endl;
    return 0;
}