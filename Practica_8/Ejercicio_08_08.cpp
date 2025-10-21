// Materia: Programación I, Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Fecha creación: 21/10/2025
// Número de ejercicio: 8
#include <iostream>
using namespace std;


void ull(int n) {
    cout << n << " ";
    if (n == 1) return;
    if (n % 2 == 0)
        ull(n / 2);
    else
        ull(3 * n + 1);
}

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    cout << "Secuencia de Collatz: ";
    ull(n);
    cout << endl;
    return 0;
}
