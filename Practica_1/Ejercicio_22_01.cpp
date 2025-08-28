// Materia: Programacion I,Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Carnet: 12392811
// Carrera del estudiante:Ingenieria de Sistemas
//Fecha de creacion:28/08/2025
// Numero de ejercicio 22
#include <iostream>
using namespace std;

int main() {
    int a;
    int b;

    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;

    if (a == 0 || b == 0) {
        cout << "No se puede verificar múltiplos con el cero." << endl;
    } else if (a % b == 0) {
        cout << a << " es multiplo de " << b << endl;
    } else if (b % a == 0) {
        cout << b << " es multiplo de " << a << endl;
    } else {
        cout << "Ninguno es multiplo del otro." << endl;
    }

    return 0;
}
