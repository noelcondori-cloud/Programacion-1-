// Materia: Programación I, Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Fecha creación: 04/11/2025
// Número de ejercicio: 2
#include <iostream>
using namespace std;

struct Atleta {
    char nombre[50];
    char pais[50];
    int edad;
    int mejor_tiempo; // en segundos
};

int main() {
    int N;
    cout << "Cuantos atletas deseas registrar? ";
    cin >> N;
    cin.ignore(); // limpiar buffer

    Atleta atletas[100]; // máximo 100 atletas

    for (int i = 0; i < N; i++) {
        cout << "\n=== Atleta " << i + 1 << " ===\n";

        cout << "Nombre: ";
        cin.getline(atletas[i].nombre, 50);

        cout << "Pais: ";
        cin.getline(atletas[i].pais, 50);

        cout << "Edad: ";
        cin >> atletas[i].edad;

        cout << "Mejor tiempo (en segundos): ";
        cin >> atletas[i].mejor_tiempo;

        cin.ignore(); // limpiar buffer
    }

    // Buscar mejor tiempo
    int indice_mejor = 0;
    for (int i = 1; i < N; i++) {
        if (atletas[i].mejor_tiempo < atletas[indice_mejor].mejor_tiempo) {
            indice_mejor = i;
        }
    }

    // Mostrar atleta con mejor tiempo
    cout << "\n=== Atleta con el mejor tiempo ===\n";
    cout << "Nombre: " << atletas[indice_mejor].nombre << endl;
    cout << "Pais: " << atletas[indice_mejor].pais << endl;
    cout << "Tiempo: " << atletas[indice_mejor].mejor_tiempo << " segundos\n";

    return 0;
}
