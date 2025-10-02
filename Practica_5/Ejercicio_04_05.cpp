// Materia: Programación I, Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Fecha creación: 02/10/2025
// Número de ejercicio: 4
// Problema planteado:4 Leer 2 vectores de dimensión N y calcule la multiplicación de los mismos en otro vector:

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cout << "Ingrese la dimension de los vectores: ";
    cin >> N;

    vector<int> A(N), B(N), C(N);

    // Leer vector A
    cout << "\nIngrese los elementos del vector A:\n";
    for (int i = 0; i < N; i++) {
        cout << "A[" << i << "] = ";
        cin >> A[i];
    }

    // Leer vector B
    cout << "\nIngrese los elementos del vector B:\n";
    for (int i = 0; i < N; i++) {
        cout << "B[" << i << "] = ";
        cin >> B[i];
    }

    // Calcular multiplicación elemento a elemento
    for (int i = 0; i < N; i++) {
        C[i] = A[i] * B[i];
    }

    // Mostrar resultados
    cout << "\nVector A: ";
    for (int x : A) cout << x << " ";

    cout << "\nVector B: ";
    for (int x : B) cout << x << " ";

    cout << "\nVector C (A * B): ";
    for (int x : C) cout << x << " ";

    cout << endl;

    return 0;
}
