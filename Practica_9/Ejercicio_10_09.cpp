// Materia: Programación I, Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Fecha creación: 04/11/2025
// Número de ejercicio: 10
#include <iostream>
using namespace std;
struct Fraccion {
    int numerador;
    int denominador;
};

// Función para calcular el MCD usando algoritmo de Euclides
int MCD(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

// Función para reducir la fraccion
Fraccion ReducirFraccion(Fraccion f) {
    Fraccion fraccionSimplificada;
    int mcd = MCD(f.numerador, f.denominador);

    fraccionSimplificada.numerador = f.numerador / mcd;
    fraccionSimplificada.denominador = f.denominador / mcd;

    return fraccionSimplificada;
}

int main() {
    Fraccion f;
    cout << "Ingrese numerador: ";
    cin >> f.numerador;
    cout << "Ingrese denominador: ";
    cin >> f.denominador;

    Fraccion f_simplificada = ReducirFraccion(f);

    cout << "\nFraccion original: " << f.numerador << "/" << f.denominador << endl;
    cout << "Fraccion simplificada: " << f_simplificada.numerador 
         << "/" << f_simplificada.denominador << endl;

    return 0;
}
