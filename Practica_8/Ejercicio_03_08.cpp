// Materia: Programación I, Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Fecha creación: 20/10/2025
// Número de ejercicio: 3
#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    cout << "Fibonacci de " << n << " es: " << fibonacci(n) << endl;
    return 0;
}
