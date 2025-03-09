#include<iostream>
using namespace std;

int cantidad, sexo, hembras = 0, machos = 0, categoria1, categoria2, Toros = 0, Toritos = 0, raza, Cebu = 0, SEuropeo = 0, SAmericano = 0, edad, Toritos200kg = 0, VacasEntre6y9 = 0, BecerrasEntre1y4 = 0, Toros5aniosCebu = 0;
float peso, promedio, sumaEdades = 0;
string nombre;

void MostrarEstadisticas(){
    cout<<"\t.:Estadisticas:."<<endl;
    cout<<"Promedio de edad del ganado: "<<promedio<<" anios"<<endl;
    cout<<"Total de hembras: "<<hembras<<endl;
    cout<<"Total de machos: "<<machos<<endl;
    cout<<"Total de cebus: "<<Cebu<<endl;
    cout<<"Total de Suizos Americanos: "<<SAmericano<<endl;
    cout<<"Total de Suizos Europeos: "<<SEuropeo<<endl;
    cout<<"Total de toritos que pesen igual o menos de 200 kg: "<<Toritos200kg<<endl;
    cout<<"Total de vacas entre 6 y 9 anios de edad: "<<VacasEntre6y9<<endl;
    cout<<"Total de becerras entre 1 y 4 anios de edad: "<<BecerrasEntre1y4<<endl;
    cout<<"Total de toros que tengan 5 anios de la raza cebu: "<<Toros5aniosCebu<<endl;
}

int ValidarCantidadAnimales(){
    cout<<"Ingrese la cantidad de animales que desee registrar: "; cin>>cantidad;
    while(cantidad <= 0){
        cout<<"Ingrese una cantidad mayor a 0: "; cin>>cantidad;
    }
    return cantidad;
}

void RegistrarRaza(){
    cout<<"Ingrese la raza del animal (1. Cebu  2. Suizo Americano  3. Suizo Europeo): "; cin>>raza;
    while(raza <= 0){
        cout<<"Ingrese una raza valida: "; cin>>raza;
    }
    switch(raza){
        case 1: Cebu++; break;
        case 2: SEuropeo++; break;
        case 3: SAmericano++; break;
    }
}

void RegistrarMacho(){
    cout<<"Ingrese la categoria del animal (1. Toro  2. Torito): "; cin>>categoria1;
    while(categoria1 <= 0){
        cout<<"Ingrese una categoria valida: "; cin>>categoria1;
    }
    switch(categoria1){
        case 1: Toros++; break;
        case 2: Toritos++; break;
    }

}

void RegistrarHembra(){
    cout<<"Ingrese la categoria del animal (1. Vaca  2. Becerra): "; cin>>categoria2;
    while(categoria2 <= 0){
        cout<<"Ingrese una categoria valida: "; cin>>categoria2;
    }
    if(categoria2 == 2){
        BecerrasEntre1y4++;
    }
}


void RegistrarSexo(){
    cout<<"Ingrese el sexo del animal (1. Hembra  2. Macho): "; cin>>sexo;
    while(sexo <= 0){
        cout<<"Ingrese un genero valido: "; cin>>sexo;
    }
    switch(sexo){
        case 1: RegistrarHembra(); hembras++; break;
        case 2: RegistrarMacho(); machos++; break;
    }
}

void ValidarPesoYEdad(){
    cout<<"Ingrese el peso del animal en kgs: "; cin>>peso;
    while(peso <= 10){
        cout<<"Ingrese una cantidad valida: "; cin>>peso;
    }
    cout<<"Ingrse la edad del animal: "; cin>>edad;
    while(edad >= 50){
        cout<<"Ingrese una edad menor a 50 anios: "; cin>>edad;
    }
    sumaEdades+=edad;
}

int main(){
    ValidarCantidadAnimales();
    for(int i = 0; i < cantidad; i++){
        cout<<"Ingrese el nombre del animal: "; cin.ignore(); getline(cin, nombre);
        RegistrarSexo();
        RegistrarRaza();
        ValidarPesoYEdad();
        cout<<endl;
        if(sexo == 2 and raza == 1 and edad == 5){
            Toros5aniosCebu++;
        }
        if(sexo == 2 and peso <= 200){
            Toritos200kg++;
        }
        if(sexo == 1 and edad >= 6 and edad <=9){
            VacasEntre6y9++;
        }
    }
    promedio = sumaEdades / cantidad;
    MostrarEstadisticas();
    return 0;
}