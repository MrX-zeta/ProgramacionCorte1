#include<iostream>
using namespace std;

int n, tipo, vacas = 0, becerras = 0, toros = 0, toritos = 0, raza, cebu = 0, SAmericano = 0, SEuropeo = 0, edad, VacasEntre6y9Anios = 0, BecerrasEntre1y4anios = 0, Toros5AniosCebu = 0;
int toritosMenos200kg = 0;
float peso, promedioEdades, SumaEdades = 0;

void ImprimirEstadisticas(){
    cout<<"\t.:Estadisticas:.";
    cout<<"Promedio de la edad de todo el ganado: "<<promedioEdades<<" anios"<<endl;
    cout<<"Total de ganado de la raza suizo americano: "<<SAmericano<<endl;
    cout<<"Total de la raza cebu: "<<cebu<<endl;
    cout<<"Total de Toritos que pesen igual o menos de 200kg: "<<toritosMenos200kg<<endl;
    cout<<"Total de vacas que tengan entre 6 y 9 anios de edad: "<<VacasEntre6y9Anios<<endl;
    cout<<"Total de becerras que tengan entre 1 y 4 anios de edad: "<<BecerrasEntre1y4anios<<endl;
    cout<<"Total de toros que tengan 5 anios de la raza cebu: "<<Toros5AniosCebu<<endl;
}

int main(){
    string nombre;
    cout<<"Ingrese la cantidad de animales que desea registrar: "; cin>>n;
    while(n <= 0){
        cout<<"Ingrese una cantidad valida: "; cin>>n;
    }
    for(int i = 0; i < n; i++){
        cout<<"Ingrese el nombre del animal: "; cin.ignore(); getline(cin, nombre,'\n');
        cout<<"Ingrese el tipo (1. Vaca  2. Becerra  3.Toro  4.Torito): "; cin>>tipo;
        while(tipo < 1 or tipo > 4){
            cout<<"Ingrese un tipo valido: "; cin>>tipo;
        }
        switch(tipo){
            case 1: vacas++; break;
            case 2: becerras++; break;
            case 3: toros++; break;
            case 4: toritos++;  break;
        }
        cout<<"Ingrese la raza del animal (1. Cebu  2. Suizo Americano  3. Suizo Europeo) :"; cin>>raza;
        while(raza<1 or raza>3){
            cout<<"Ingrese una raza valida: "; cin>>raza;
        }
        switch(raza){
            case 1: cebu++; break;
            case 2: SAmericano++; break;
            case 3: SEuropeo++; break;
        }
        cout<<"Ingrese la edad del animal: "; cin>>edad;
        while(edad >= 50){
            cout<<"Ingrese una edad menor a 50: "; cin>>edad;
        }
        SumaEdades += edad;
        if(tipo == 1 and edad >=6 and edad <=9){
            VacasEntre6y9Anios++;
        }
        if(tipo == 2 and edad >=1 and edad <= 4){
            BecerrasEntre1y4anios++;
        }
        if(tipo == 3 and edad == 5){
            Toros5AniosCebu++;
        }
        cout<<"Ingrese el peso del animal en kg: "; cin>>peso;
        while(peso <=10 ){
            cout<<"Ingrese un peso mayor a 10kg: "; cin>>peso;
        }
        if(tipo == 4 and peso <=200){
            toritosMenos200kg++;
        }
        cout<<endl;
    }
    promedioEdades = SumaEdades / n;
    ImprimirEstadisticas();
    return 0;
}