#include <iostream>
#include <cmath>
using namespace std;

double areaCirculo(float radio){
    return M_PI * pow(radio, 2);
}

double perimetroCirculo(float radio){
    return 2 * M_PI * radio;
}

double areaCuadrado(float lado){
    return pow(lado, 2);
}

double perimetroCuadrado(float lado){
    return 4 * lado;
}

double areaRombo(float diagonalMayor, float diagonalMenor) {
    return (diagonalMayor * diagonalMenor) / 2;
}

double perimetroRombo(float lado) {
    return 4 * lado;
}

double areaTriangulo(float base, float altura) {
    return (base * altura) / 2;
}

double perimetroTriangulo(float lado1, float lado2, float lado3) {
    return lado1 + lado2 + lado3;
}

void calcularCirculo() {
    float radio;
    cout<<"Ingrese el valor del radio del circulo: "; cin>>radio;
    while(radio <= 0){
        cout<<"Ingrese un valor mayor a 0: "; cin>>radio;
    }
    int opcion;
    cout << "¿Qué desea calcular? (1) Area   (2) Perimetro: ";
    cin >> opcion;

    if (opcion == 1){
        cout << "El area del circulo es: " << areaCirculo(radio) << endl;
    } 
    else if (opcion == 2){
        cout << "El perimetro del circulo es: " << perimetroCirculo(radio) << endl;
    } 
    else{
        while(opcion <= 0 or opcion > 2){
            cout<<"Ingrese una opcion valida: "; cin>>opcion;
        }
    }
}

void calcularCuadrado() {
    float lado;
    cout<<"Ingrese el lado del cuadrado: "; cin>>lado;
    while(lado <= 0){
        cout<<"Ingrese un valor mayor a 0: "; cin>>lado;
    }
    int opcion;
    cout << "¿Qué desea calcular? (1) Area   (2) Perimetro: "; cin >> opcion;

    if(opcion == 1){
        cout << "El area del cuadrado es: " << areaCuadrado(lado) << endl;
    } 
    else if(opcion == 2){
        cout << "El perimetro del cuadrado es: " << perimetroCuadrado(lado) << endl;
    } 
    else{
        while(opcion <= 0 or opcion > 2){
            cout<<"Ingrese una opcion valida: "; cin>>opcion;
        }
    }
}

void calcularRombo() {
    float diagonalMayor;
    cout<<"Ingrese la diagonal mayor del rombo: "; cin>>diagonalMayor;
    while(diagonalMayor <= 0){
        cout<<"Ingrese un valor mayor a 0: "; cin>>diagonalMayor;
    }
    float diagonalMenor;
    cout<<"Ingrese la diagonal menor del rombo: "; cin>>diagonalMenor;
    while(diagonalMenor <= 0){
        cout<<"Ingrese un valor mayor a 0: "; cin>>diagonalMenor;
    }
    float lado;
    cout<<"Ingrese el lado del rombo: "; cin>>lado;
    while(lado <= 0){
        cout<<"Ingrese un valor mayor a 0: "; cin>>lado;
    }
    int opcion;
    cout << "¿Qué desea calcular? (1) Area   (2) Perimetro: "; cin>>opcion;
    while(opcion <= 0 or opcion > 2){
        cout<<"Ingrese una opcion valida: "; cin>>opcion;
    }
    if(opcion == 1){
        cout << "El area del rombo es: " << areaRombo(diagonalMayor, diagonalMenor)<<endl;
    } 
    else if(opcion == 2){
        cout << "El perimetro del rombo es: "<<perimetroRombo(lado)<<endl;
    }
}

void calcularTriangulo() {
    int tipo;
    cout << "Seleccione el tipo de triangulo: (1) Isosceles   (2) Escaleno   (3) Equilatero: "; cin>>tipo;
    if(tipo == 1){
        float lado;
        cout<<"Ingrese la longitud de los lados iguales: "; cin>>lado;
        while(lado <= 0){
            cout<<"Ingrese un valor mayor a 0: "; cin>>lado;
        }
        float base;
        cout<<"Ingrese la base: "; cin>>base;
        while(base <= 0){
            cout<<"Ingrese un valor mayor a 0: "; cin>>base;
        }
        int opcion;
        cout << "¿Que desea calcular? (1) Area   (2) Perimetro: "; cin >> opcion;
        if(opcion == 1){
            float altura = sqrt(pow(lado, 2) - pow(base / 2, 2));
            cout << "El area del triángulo isosceles es: "<<areaTriangulo(base, altura)<<endl;
        } 
        else if(opcion == 2){
            cout << "El perimetro del triangulo isosceles es: "<<perimetroTriangulo(lado, lado, base)<<endl;
        } 
        else{
            while(opcion <= 0 or opcion > 2){
                cout<<"Ingrese una opcion valida: "; cin>>opcion;
            }
        }
    } 
    else if(tipo == 2){
        float lado1;
        cout<<"Ingrese el primer lado: "; cin>>lado1;
        while(lado1 <= 0){
            cout<<"Ingrese un valor mayor a 0: "; cin>>lado1;
        }
        float lado2;
        cout<<"Ingrese el segundo lado: "; cin>>lado2;
        while(lado2 <= 0){
            cout<<"Ingrese un valor mayor a 0: "; cin>>lado2;
        }
        float lado3;
        cout<<"Ingrese el tercer lado: "; cin>>lado3;
        while(lado3 <= 0){
            cout<<"Ingrese un valor mayor a 0: "; cin>>lado3;
        }
        int opcion;
        cout << "¿Que desea calcular? (1) Area   (2) Perimetro: "; cin >> opcion;
        if(opcion == 1){
            float s = (lado1 + lado2 + lado3) / 2;
            float area = sqrt(s * (s - lado1) * (s - lado2) * (s - lado3));
            cout << "El area del triángulo escaleno es: "<<area<<endl;
        } 
        else if(opcion == 2){
            cout<<"El perimetro del triangulo escaleno es: "<<perimetroTriangulo(lado1, lado2, lado3)<<endl;
        } 
        else{
            while(opcion <= 0 or opcion > 2){
                cout<<"Ingrese una opcion valida: "; cin>>opcion;
            }
        }
    } 
    else if(tipo == 3){
        float lado;
        cout<<"Ingrese la longitud de un lado: "; cin>>lado;
        while(lado <= 0){
            cout<<"Ingrese un valor mayor a 0: "; cin>>lado;
        }
        int opcion;
        cout << "¿Que desea calcular? (1) Area   (2) Perimetro: "; cin>>opcion;
        while(opcion <= 0 or opcion > 2){
            cout<<"Ingrese una opcion valida: "; cin>>opcion;
        }
        if(opcion == 1){
            float altura = (sqrt(3) / 2) * lado;
            cout << "El area del triángulo equilatero es: "<<areaTriangulo(lado, altura)<<endl;
        } 
        else if(opcion == 2){
            cout << "El perimetro del triangulo equilatero es: "<<perimetroTriangulo(lado, lado, lado)<<endl;
        } 
        else{
            while(opcion <= 0){
                cout<<"Ingrese una opcion valida: "; cin>>opcion;
            }
        }
    } 
    else{
        while(tipo <= 0 or tipo > 3){
            cout<<"Ingrese un tipo valido: "; cin>>tipo;
        }
    }
}


int inicio(){
    int estado = 0;
    int opcion = 0;
    
    cout<<"Seleccione una figura: (1) Circulo   (2) Cuadrado   (3) Rombo   (4) Triangulo   (5) Salir: "; cin>>opcion;
    switch (opcion){
        case 1:
            calcularCirculo();
            break;
        case 2:
            calcularCuadrado();
            break;
        case 3:
            calcularRombo();
            break;
        case 4:
            calcularTriangulo();
            break;
        case 5:
            cout<<"Saliendo del programa..."<<endl;
            return 0;
        break;
    }   
    cout<<"¿Desea realizar otro calculo? (s/n): "; cin>>estado;

    return estado;
    
}

int main() {
    int estado = 2;
    do{
       estado = inicio(); 
    } while(estado != 2);
    cout<<"Usted ha salido del programa de forma exitosa"<<endl;
    return 0;
}