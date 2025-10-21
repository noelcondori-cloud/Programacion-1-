// Materia: Programación I, Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Fecha creación: 20/10/2025
// Número de ejercicio: 2
#include <iostream>
using namespace std;
int potencia(int a, int b) {
    if (b == 0) return 1;     
    return a * potencia(a, b - 1);
}

int main() {
    int a, b;
    cout << "Ingrese base: ";
    cin >> a;
    cout << "Ingrese exponente: ";
    cin >> b;
    cout << a << " elevado a " << b << " es: " << potencia(a, b) << endl;
    return 0;
}
