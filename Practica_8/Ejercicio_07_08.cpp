// Materia: Programación I, Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Fecha creación: 21/10/2025
// Número de ejercicio: 7
#include <iostream>
using namespace std;


int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    cout << "El factorial es: " << factorial(n) << endl;
    return 0;
}
