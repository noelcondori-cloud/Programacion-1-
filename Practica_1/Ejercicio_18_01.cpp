// Materia: Programacion I,Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Carnet: 12392811
// Carrera del estudiante:Ingenieria de Sistemas
//Fecha de creacion:28/08/2025
// Numero de ejercicio 18
#include <iostream>
using namespace std;
bool esPrimo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int contador = 0;  
    int numero = 2;     

    cout << "Los primeros 100 numeros primos son:\n";

    while (contador < 100) {
        if (esPrimo(numero)) {
            cout << numero << " ";
            contador++;
        }
        numero++;
    }

    cout << endl;
    return 0;
}
