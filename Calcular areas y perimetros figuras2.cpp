#include<iostream>
#include<cmath>
using namespace std;

int opcionFig, OpcionTrianguloEq, OpcionTrianguloI, OpcioniTrianguloEs;
float radio, ladoC, D1, D2, ladoR, LadoTEq, AlturaTEq, LadoIs, BaseIs, AlturaIs, LadoTEs1, LadoTEs2, BaseTEs, AlturaTEs;

void MostrarMenu(){
    cout<<"Ingrese una figura (1. Circulo  2. Cuadrado  3. Rombo  4. Triangulo  5. salir): "; cin>>opcionFig;
    while(opcionFig <= 0 or opcionFig > 5){
        cout<<"Ingrese una opcion valida: "; cin>>opcionFig;
    }
}

void CalcularOperacionCirculo(float radio){
    float areaCirculo, perimetroCirculo;
    int opcion;
    if(opcionFig == 1){
        cout<<"Ingrese la operacion que desea calcular (1. Area  2. Perimetro):"; cin>>opcion;
        while(opcion <= 0){
            cout<<"Ingrese una opcion valida: "; cin>>opcion;
        }
        switch(opcion){
            case 1: areaCirculo = M_PI * pow(radio, 2); cout<<"El area del cuadrado es: "<<areaCirculo<<endl; break;
            case 2: perimetroCirculo = 2 * M_PI * radio; cout<<"El perimetro del circulo es: "<<perimetroCirculo; break;
            default: cout<<"opcion invalida, intente de nuevo"; break;
        }
    }
    cout<<endl;
}


void CalcularOperacionCuadrado(float lado){
    float areaCuadrado, perimetroCuadrado;
    int opcion;
    if(opcionFig == 2){
        cout<<"Ingrese la operacion que desea calcular (1. Area  2. Perimetro): "; cin>>opcion;
        while(opcion < 1 or opcion > 2){
            cout<<"Ingrese una operacion valida: "; cin>>opcion;
        }
        switch(opcion){
            case 1: areaCuadrado = pow(lado, 2); cout<<"El area del cuadrado es: "<<areaCuadrado<<endl; break;
            case 2: perimetroCuadrado = 4 * lado; cout<<"El perimetro del cuadrado es: "<<perimetroCuadrado<<endl; break;
            default: cout<<"Opcion invalida, intente de nuevo"; break;
        }
    }
    cout<<endl;
}

void CalcularOperacionRombo(float DMayor, float DMenor, float ladoR){
    float areaRombo, perimetroRombo;
    int opcion;
    if(opcionFig == 3){
        cout<<"Ingrese la operacion que desea calcular (1. Area  2. Perimetro):"; cin>>opcion;
        while(opcion < 1 or opcion > 2){
            cout<<"Ingrese una operacion valida: "; cin>>opcion;
        }
        switch(opcion){
            case 1: areaRombo = (DMayor * DMenor) / 2; cout<<"El area del rombo es: "<<areaRombo<<endl; break;
            case 2: perimetroRombo = 4 * ladoR; cout<<"El perimetro del rombo es: "<<perimetroRombo<<endl; break;
            default: cout<<"Opcion invalida, intente de nuevo"; break;
        }
    }
    cout<<endl;
}


void CalcularOPeracionTrianguloEq(float ladoTEq, float alturaTEq){
    float areaTrianguloEq, perimetroTrianguloEq;
    switch(OpcionTrianguloEq){
        case 1: areaTrianguloEq = (ladoTEq * alturaTEq) / 2; cout<<"El area del triangulo equilatero es: "<<areaTrianguloEq<<endl; break;
        case 2: perimetroTrianguloEq = 3 * ladoTEq; cout<<"El perimetro del triangulo equilatero es: "<<perimetroTrianguloEq<<endl; break;
        default: cout<<"Opcion invalida, intente de nuevo"; break;
    }
    cout<<endl;
}

void CalcularOperacionTrianguloI(float LIs, float BIs, float AltIs){
    float areaTrianguloI, perimetroTrianguloI;
    switch(OpcionTrianguloI){
        case 1: areaTrianguloI = (BIs * AltIs) / 2; cout<<"El area del triangulo isosceles es: "<<areaTrianguloI<<endl; break;
        case 2: perimetroTrianguloI = 2 * LIs + BIs; cout<<"El perimetro del triangulo isosceles es: "<<perimetroTrianguloI<<endl; break;
        default: cout<<"Opcion invalida, intente de nuevo"; break;
    }
    cout<<endl;
}

void CalcularOperacionTrianguloEs(float Lado1, float Lado2, float BaseE, float AlturaE){
    float areaTrianguloEs, perimetroTrianguloEs;
    switch(OpcioniTrianguloEs){
        case 1: areaTrianguloEs = (BaseE * AlturaE) / 2; cout<<"El area del triangulo escaleno es: "<<areaTrianguloEs<<endl; break;
        case 2: perimetroTrianguloEs = Lado1 + Lado2 + BaseE; cout<<"El perimetro del triangulo escaleno es: "<<perimetroTrianguloEs<<endl; break;
        default: cout<<"Opcion invalida, intente de nuevo:"; break;
    }
    cout<<endl;
}

void ValidarTriangulo(){
    int tipoTriangulo;
    //float lado, altura;
    if(opcionFig == 4){
        cout<<"Ingrese el tipo de triangulo (1. Equilatero  2. Isosceles  3. Escaleno): "; cin>>tipoTriangulo;
        switch(tipoTriangulo){
            case 1: 
            cout<<"Ingrese la operacion que desea calcular (1. Area  2. Perimetro): "; cin>>OpcionTrianguloEq;
            cout<<"Ingrese el valor del lado del triangulo equilatero: "; cin>>LadoTEq;
            cout<<"Ingrese el valor de la altura del triangulo equilatero: "; cin>>AlturaTEq;
            CalcularOPeracionTrianguloEq(LadoTEq, AlturaTEq);
            break;
            case 2: 
            cout<<"Ingrese la operacion que desea calcular (1. Area  2. Perimetro): "; cin>>OpcionTrianguloI;
            cout<<"Ingrese el valor de los lados iguales del triangulo isosceles: "; cin>>LadoIs;
            cout<<"Ingrese el valor de la base del triangulo isoscles: "; cin>>BaseIs;
            cout<<"Ingrese el valor de la altura del triangulo isosceles: "; cin>>AlturaIs;
            CalcularOperacionTrianguloI(LadoIs, BaseIs, AlturaIs);
            break;
            case 3: 
            cout<<"Ingrese la operacion que desea calcular (1. Area  2. Perimetro):"; cin>>OpcioniTrianguloEs; 
            cout<<"Ingrese el valor del primer lado del triangulo escaleno: "; cin>>LadoTEs1;
            cout<<"Ingrese el valor del segundo lado del triangulo escaleno: "; cin>>LadoTEs2;
            cout<<"Ingrese el valor de la base del triangulo escaleno: "; cin>>BaseTEs;
            cout<<"Ingrese el valor de la altura del triangulo escaleno: "; cin>>AlturaTEs;
            CalcularOperacionTrianguloEs(LadoTEs1, LadoTEs2, BaseTEs, AlturaTEs);
            break;
            default: cout<<"Opcion invalida, intente de nuevo"; break;
        }
    }
    cout<<endl;
}

int main(){
    int continuar;
    do{
        MostrarMenu();
        switch(opcionFig){
            case 1: cout<<"Ingrese el radio del circulo: "; cin>>radio; 
            while(radio <= 0){
                cout<<"Ingrese una cantidad valida: "; cin>>radio;
            }
            CalcularOperacionCirculo(radio); break;
            case 2: cout<<"Ingrese el valor del lado del cuadrado: "; cin>>ladoC; 
            while(ladoC <= 0){
                cout<<"Ingrese una cantidad valida: "; cin>>ladoC;
            }
            CalcularOperacionCuadrado(ladoC); break;
            case 3: cout<<"Ingrese el valor de la diagonal mayor: "; cin>>D1; cout<<"Ingrese el valor de la diagonal menor: "; cin>>D2; cout<<"Ingrese el valor del lado del rombo: "; cin>>ladoR;
            while(D1 <= 0){
                cout<<"Ingrese una cantidad valida: "; cin>>D1;
            }
            while(D2 <= 0){
                cout<<"Ingrese una cantidad valida: "; cin>>D2;
            }
            while(ladoR <= 0){
                cout<<"Ingrese una cantida valida: "; cin>>ladoR;
            }
            CalcularOperacionRombo(D1, D2,ladoR); break;
            case 4: ValidarTriangulo(); 
        }
        cout<<"Desea seguir calculando otras figuras? (1. si  2. no): "; cin>>continuar;
    }while(continuar != 2);
    cout<<"Usted ha salido del programa exitosamente"<<endl;
    if(opcionFig == 5){
        cout<<"Usted ha salido del programa exitosamente"<<endl;
    }
    return 0;
}