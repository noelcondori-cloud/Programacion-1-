// Materia: Programación I, Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Fecha creación: 09/10/2025
// Número de ejercicio: 4
// Problema planteado:4
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;

    cout << "Ingrese la cantidad de numeros: ";
    cin >> n;

    vector<int> numeros(n);
    cout << "Ingrese los " << n << " numeros:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> numeros[i];
    }

    cout << "Ingrese cuantas posiciones desea rotar a la derecha: ";
    cin >> k;
    k = k % n;

    vector<int> rotado(n);

    for (int i = 0; i < n; i++) {
        int nuevaPos = (i + k) % n; 
        rotado[nuevaPos] = numeros[i];
    }

    cout << "\nVector despues de rotar " << k << " posiciones a la derecha:\n";
    for (int i = 0; i < n; i++) {
        cout << rotado[i] << " ";
    }
    cout << endl;

    return 0;
}
