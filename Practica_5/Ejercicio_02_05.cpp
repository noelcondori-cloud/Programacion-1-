// Materia: Programación I, Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Fecha creación: 02/10/2025
// Número de ejercicio: 2
// Problema planteado:2 Escriba un programa para introducir los siguientes valores en un arreglo nombrado
//voltios: 11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59. Después que se hayan
//introducido los datos, haga que su programa despliegue los valores.
//      11.95 16.32 12.15
//      8.22 15.98 26.22
//      13.54 6.45 17.59
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<double> voltios(9); // vector con 9 posiciones
    
    cout << "Ingrese 9 valores de voltios:\n";
    for (int i = 0; i < 9; i++) {
        cout << "Valor " << i + 1 << ": ";
        cin >> voltios[i];
    }

    cout << "\nValores en forma de matriz 3x3:\n\n";

    int columnas = 3;
    for (int i = 0; i < 9; i++) {
        cout << voltios[i] << "\t";
        if ((i + 1) % columnas == 0) // salto de línea cada 3 valores
            cout << endl;
    }

    return 0;
}
