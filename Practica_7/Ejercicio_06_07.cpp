// Materia: Programacion 1, Paralelo 4
// Autor: Condori Quispe Noel F ernando
// Carnet: 12392811 L.P.
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha de Creacion: 16/10/25
// Numero de Ejercicio: 6
#include <iostream>
using namespace std;

int main() {
    int N, M; 
    cout << "Ingresa el numero de filas (N): ";
    cin >> N;
    cout << "Ingresa el numero de columnas (M): ";
    cin >> M;

    int matriz[100][100], transpuesta[100][100];
    cout << "Ingresa los elementos de la matriz:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            transpuesta[j][i] = matriz[i][j];
        }
    }
    cout << "\nMatriz original:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\nMatriz transpuesta:\n";
    for (int i = 0; i < M; i++) { 
        for (int j = 0; j < N; j++) {
            cout << transpuesta[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
