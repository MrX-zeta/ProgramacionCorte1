/* Calcular el área y perímetro de un pentágono, hexágono, heptágono, octágono, eneágono decágono y dodecágono */
#include<iostream>
using namespace std;

int eleccion1, eleccion2, continuar;
float longitudLado, perimetro, apotema;

void Validarfigura(){
    cout<<"eliga una figura: "<<endl;
    cout<<"1. Pentagono  2. Hexagono  3. Heptagono  4. Octagono  5. eneagono  6. decagono  7. dodecagono  8. salir: "; cin>>eleccion1;
    while(eleccion1 < 1 or eleccion1 > 8){
        cout<<"Ingrese una figura valida: "; cin>>eleccion1;
    }
}

float ValidarLongitudLado(){
    float num;
    do{
        cout<<"Ingrese el valor de la apotema: "; cin>>num;
    }while(num <= 0);
    return num;

}

void calcularPerimetroYArea() {
    int lados = 0;
    switch(eleccion1){
        case 1: lados = 5; break;
        case 2: lados = 6; break;
        case 3: lados = 7; break;
        case 4: lados = 8; break;
        case 5: lados = 9; break;
        case 6: lados = 10; break;
        case 7: lados = 11; break;
    }
    float longitudLado = ValidarLongitudLado();
    float perimetro = lados * longitudLado;
    cout << "El perimetro del polígono es: " <<perimetro<<endl;
    float apotema = ValidarLongitudLado();
    float area = (perimetro * apotema) / 2;
    cout << "El área del poligono es: " << area << endl;
}

int main(){
    do{
        Validarfigura();
    if(eleccion1 == 8){
        cout<<"Usted ha salido del programa de forma exitosa"<<endl;
    }
    calcularPerimetroYArea();
    cout<<endl;
    cout<<"¿Desea calcular otra figura? (1. si   2. no): "; cin>>continuar;
    }while(continuar == 1);
    return 0;
}