#include <iostream>

using namespace std;

// Función recursiva para calcular el factorial de un número
int Calcularfactorial(int n) {
    // Caso base: si n es 0 o 1, el factorial es 1
    if (n == 0 || n == 1) {
        return 1;
    }
    // Caso recursivo: multiplicar n por el factorial de (n-1)
    else {
        return n * Calcularfactorial(n - 1);
    }
}

int main() {
    int num;
    // Solicitar al usuario un número
    cout << "Ingrese un numero para calcular su factorial: ";
    cin >> num;

    // Verificar que el número sea no negativo
    if (num < 0) {
        cout << "El factorial no esta definido para números negativos." << endl;
    } else {
        int resultado = Calcularfactorial(num);
        cout << "El factorial de " << num << " es: " << resultado << endl;
    }
    return 0;
}