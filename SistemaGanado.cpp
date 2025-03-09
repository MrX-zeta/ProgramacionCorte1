#include<iostream>
using namespace std;

int cantidad, EdadVacas, EdadBecerras, sexo, hembras = 0, machos = 0, categoria1, categoria2, vacas = 0, becerras = 0, toros = 0, toritos = 0, razaVacas, razaBecerras;
int Cebu=0, SAmericano=0, SEuropeo=0, VacasEntre6y9 = 0, BecerrasEntre1y4 = 0, edadToros, edadToritos, razaToros, razaToritos, PesoToritos200=0, toros5aniosCebu=0;
float pesoVacas, pesoBecerras, promedioEdades, pesoToros, PesoToritos, sumaEdades = 0;
string nombre;

void ValidarCantidadAnimales(){
    cout<<"Ingrese la cantidad de animales que desea registrar: "; cin>>cantidad;
    while(cantidad<=0 or cin.fail()){
        cin.clear();
        cin.ignore(1000,'\n');
        cout<<"Ingrese una cantidad mayor a 0: "; cin>>cantidad;
    }
    
}

void imprimirEstadisticas(){
    cout<<"\t.:Estadisticas:."<<endl;
    cout<<"El promedio de las edades del ganado es: "<<promedioEdades<<" anios"<<endl;
    cout<<"Total de hembras: "<<hembras<<endl;
    cout<<"Total de machos: "<<machos<<endl;
    cout<<"Total de ganado de la raza Suizo Americano: "<<SAmericano<<endl;
    cout<<"Total de ganado de la raza Suizo Europeo: "<<SEuropeo<<endl; 
    cout<<"Total de ganado de la raza Cebu: "<<Cebu<<endl;
    cout<<"Total de toritos que pesen igual o menos de 200kg: "<<PesoToritos200<<endl;
    cout<<"Total de vacas con edades entre 6 y 9: "<<VacasEntre6y9<<endl;
    cout<<"Total de becerras entre 1 y 4 anios: "<<BecerrasEntre1y4<<endl;
    cout<<"Total de toros de 5 anios de la raza Cebu: "<<toros5aniosCebu<<endl;
}

int main(){
    ValidarCantidadAnimales();
    for(int i = 0; i<cantidad; i++){
        cout<<"Ingrese el nombre del animal: "; cin.ignore(); getline(cin, nombre);
        cout<<"Ingrese el sexo del animal (1. Hembra   2. Macho): "; cin>>sexo;
        while(sexo < 1 or sexo > 2){
            cout<<"Ingrese un genero valido: "; cin>>sexo;
        }
        switch(sexo){
            case 1: hembras++;
            cout<<"Ingrese la categoria del animal (1. Vaca  2. becerra): "; cin>>categoria1;
            while(categoria1 < 1 or categoria1 > 2){
                cout<<"Ingrese una categoria valida: "; cin>>categoria1;
            }
            switch(categoria1){
                case 1: vacas++;
                cout<<"Ingrese la edad del animal: "; cin>>EdadVacas;
                while(EdadVacas < 0){
                    cout<<"Ingrese una edad valida: "; cin>>EdadVacas;
                }
                while(EdadVacas >= 50){
                    cout<<"La edad no debe ser mayor o igual a 50, intente de nuevo: "; cin>>EdadVacas;
                }
                if(EdadVacas >= 6 and EdadVacas <= 9){
                    VacasEntre6y9++;
                }
                sumaEdades+=EdadVacas;
                cout<<"Ingrese la raza del animal (1. Cebu   2. Suizo Americano  3. Suizo Europeo): "; cin>>razaVacas;
                while(razaVacas < 1 or razaVacas > 3){
                    cout<<"Ingrese una raza valida: "; cin>>razaVacas;
                }
                switch(razaVacas){
                    case 1: Cebu++; break;
                    case 2: SAmericano++; break;
                    case 3: SEuropeo++; break;
                }
                cout<<"Ingrese el peso del animal en kgs: "; cin>>pesoVacas;
                while(pesoVacas <= 0 or pesoVacas <= 10){
                    cout<<"Ingrese una cantidad valida: "; cin>>pesoVacas;
                }
                break;
                
                case 2: becerras++; 
                cout<<"Ingrese la edad del animal: "; cin>>EdadBecerras;
                while(EdadBecerras < 0){
                    cout<<"Ingrese una edad valida: "; cin>>EdadBecerras;
                }
                while(EdadBecerras >= 50){
                    cout<<"La edad no debe ser mayor o igual a 50, intente de nuevo: "; cin>>EdadBecerras;
                }
                if(EdadBecerras >= 1 and EdadBecerras <= 4){
                    BecerrasEntre1y4++;
                }
                sumaEdades+=EdadBecerras;
                cout<<"Ingrese la raza del animal (1. Cebu   2. Suizo Americano  3. Suizo Europeo): "; cin>>razaBecerras;
                while(razaBecerras < 1 or razaBecerras > 3){
                    cout<<"Ingrese una raza valida: "; cin>>razaBecerras;
                }
                switch(razaBecerras){
                    case 1: Cebu++; break;
                    case 2: SAmericano++; break;
                    case 3: SEuropeo++; break;
                }
                cout<<"Ingrese el peso del animal: "; cin>>pesoBecerras;
                while(pesoBecerras <= 0 or pesoBecerras <= 10){
                    cout<<"Ingrese una cantidad valida: "; cin>>pesoBecerras;
                }
                break;
            }
            break;

            case 2: machos++;
            cout<<"Ingrese la cateogoria del animal (1. Toro   2. Torito): "; cin>>categoria2;
            while(categoria2 < 1 or categoria2 > 3){
                cout<<"Ingrese una categoria valida: "; cin>>categoria2;
            }
            switch(categoria2){
                case 1: toros++;
                cout<<"Ingrese la edad del animal: "; cin>>edadToros;
                while(edadToros < 0){
                    cout<<"Ingrese una edad valida: "; cin>>edadToros;
                }
                while(edadToros >= 50){
                    cout<<"La edad ingresada no debe ser mayor o igual a 50, intente de nuevo: "; cin>>edadToros;
                }
                sumaEdades+=edadToros;
                cout<<"Ingrese la raza del animal (1. Cebu  2. Suizo Americano  3. Suizo Europeo): "; cin>>razaToros;
                while(razaToros < 1 or razaToros > 3){
                    cout<<"Ingrese una raza valida: "; cin>>razaToros;
                }
                switch(razaToros){
                    case 1: Cebu++; break;
                    case 2: SAmericano++; break;
                    case 3: SEuropeo++; break;
                }
                if(edadToros == 5 and razaToros == 1){
                    toros5aniosCebu++;
                }
                cout<<"Ingrese el peso del animal en kgs: "; cin>>pesoToros;
                while(pesoToros < 0){
                    cout<<"Ingrese una cantidad valida: "; cin>>pesoToros;
                }
                while(pesoToros <= 10){
                    cout<<"Ingrese una cantida valida: "; cin>>pesoToros;
                }
                break;
                
                case 2: toritos++;
                cout<<"Ingrese la edad del animal: "; cin>>edadToritos;
                while(edadToritos < 0){
                    cout<<"Ingrese una edad valida: "; cin>>edadToritos;
                }
                while(edadToritos >= 50){
                    cout<<"La edad ingresada no debe ser mayor o igual a 50, intente de nuevo: "; cin>>edadToritos;
                }
                sumaEdades+=edadToritos;
                cout<<"Ingrese la raza del animal (1. Cebu  2. Suizo Americano  3. Suizo Europeo): "; cin>>razaToritos;
                while(razaToritos < 1 or razaToritos > 3){
                    cout<<"Ingrese una raza valida: "; cin>>razaToritos;
                }
                switch(razaToritos){
                    case 1: Cebu++; break;
                    case 2: SAmericano++; break;
                    case 3: SEuropeo++; break;
                }
                cout<<"Ingrese el peso del animal en kgs: "; cin>>PesoToritos;
                while(PesoToritos <= 10){
                    cout<<"Ingrese una cantidad valida: "; cin>>PesoToritos;
                }
                if(PesoToritos <= 200){
                    PesoToritos200++;
                }
                break;
            }
        }
        cout<<endl;
    }
    promedioEdades = sumaEdades / cantidad;
    imprimirEstadisticas();
    return 0;
}