#include<iostream>
using namespace std;

int eleccion, lados = 0;
float perimetro;

void ValidarFigura(){
    cout<<"Ingrese una figura (1. Pentagono  2. Hexagono  3. Heptagono  4. Octagono  5. Eneagono  6. Decagono  7. Dodecagono 8. salir): "; cin>>eleccion;
    while(eleccion < 1 or eleccion > 8){
        cout<<"Ingrese una opcion valida: "; cin>>eleccion;
    }
}

void AsignarLados(){
    switch(eleccion){
        case 1: lados = 5; break;
        case 2: lados = 6; break;
        case 3: lados = 7; break;
        case 4: lados = 8; break;
        case 5: lados = 9; break;
        case 6: lados = 10; break;
        case 7: lados = 12; break;
    }
}

void CalcularPerimetro(){
    float LongitudLados;
    cout<<"Ingrese la longitud del lado del poligono: "; cin>>LongitudLados;
    while(LongitudLados <= 0){
        cout<<"Ingrese una cantidad valida: "; cin>>LongitudLados;
    }
    perimetro = lados * LongitudLados;
    cout<<"El perimetro del poligono es: "<<perimetro<<endl;
}

void CalcularArea(){
    float apotema, area;
    cout<<"Ingrese el valor de la apotema: "; cin>>apotema;
    while(apotema <= 0){
        cout<<"Ingrese una cantidad valida: "; cin>>apotema;
    }
    area = (perimetro * apotema) / 2;
    cout<<"El area del poligono es: "<<area<<endl;
}

int main(){
    int respuesta;
    do{
        ValidarFigura();
        if(eleccion == 8){
            cout<<"Ha salido del programa exitosamente ";
        }
        else{
            AsignarLados();
            CalcularPerimetro();
            CalcularArea();
        }
        cout<<"Desea calcular el perimetro y area de otra figura ? (1. si  2. no): "; cin>>respuesta;
        while(respuesta < 1 or respuesta > 2){
            cout<<"Ingrese una opcion valida: "; cin>>respuesta;
        }
    }while(respuesta == 1);
    cout<<"Ha salido del programa exitosamente";
    return 0;
}