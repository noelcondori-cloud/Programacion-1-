// Materia: Programación I, Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Fecha creación: 09/10/2025
// Número de ejercicio: 6
// Problema planteado:6
#include <iostream>
#include <vector>
#include <cstdlib> 
#include <ctime>   
using namespace std;

int main() {
    int N;
    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> N;

    vector<int> calificaciones(N);
    int reprobado = 0, regular = 0, bueno = 0, excelente = 0;

    srand(time(0)); // inicializa la semilla de números aleatorios
    for (int i = 0; i < N; i++) {
        calificaciones[i] = rand() % 101; 
    }
    for (int i = 0; i < N; i++) {
        if (calificaciones[i] < 60)
            reprobado++;
        else if (calificaciones[i] < 80)
            regular++;
        else if (calificaciones[i] < 90)
            bueno++;
        else
            excelente++;
    }
    cout << "\nCalificaciones generadas:\n";
    for (int i = 0; i < N; i++) {
        cout << calificaciones[i] << " ";
    }
    cout << "\n\nResultados:\n";
    cout << "Reprobado (0-59): " << (reprobado * 100.0 / N) << "%\n";
    cout << "Regular (60-79): " << (regular * 100.0 / N) << "%\n";
    cout << "Bueno (80-89): " << (bueno * 100.0 / N) << "%\n";
    cout << "Excelente (90-100): " << (excelente * 100.0 / N) << "%\n";

    return 0;
}
