// Materia: Programación I, Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Fecha creación: 04/11/2025
// Número de ejercicio: 8
#include <iostream>
using namespace std;

struct Atleta {
    char nombre[50];
    char departamento[30];
    char deporte[30];
    int medallas;
};

int main() {
    int N;
    cout << "Cuantos atletas deseas registrar? ";
    cin >> N;
    cin.ignore();

    Atleta atletas[100]; // máximo 100 atletas
    char departamentos[100][30]; // lista de departamentos
    int medallas_dep[100];       // medallas por departamento
    int num_departamentos = 0;

    // Registro de atletas
    for (int i = 0; i < N; i++) {
        cout << "\n=== Atleta " << i + 1 << " ===\n";

        cout << "Nombre: ";
        cin.getline(atletas[i].nombre, 50);

        cout << "Departamento: ";
        cin.getline(atletas[i].departamento, 30);

        cout << "Deporte: ";
        cin.getline(atletas[i].deporte, 30);

        cout << "Medallas ganadas: ";
        cin >> atletas[i].medallas;
        cin.ignore();
    }

    // Construir medallero
    for (int i = 0; i < N; i++) {
        bool encontrado = false;

        // Buscar si el departamento ya existe
        for (int j = 0; j < num_departamentos; j++) {
            bool iguales = true;
            for (int k = 0; atletas[i].departamento[k] != '\0' || departamentos[j][k] != '\0'; k++) {
                if (atletas[i].departamento[k] != departamentos[j][k]) {
                    iguales = false;
                    break;
                }
            }
            if (iguales) {
                medallas_dep[j] += atletas[i].medallas;
                encontrado = true;
                break;
            }
        }

        // Si no existe, lo agregamos
        if (!encontrado) {
            int k = 0;
            while (atletas[i].departamento[k] != '\0') {
                departamentos[num_departamentos][k] = atletas[i].departamento[k];
                k++;
            }
            departamentos[num_departamentos][k] = '\0'; // fin de cadena
            medallas_dep[num_departamentos] = atletas[i].medallas;
            num_departamentos++;
        }
    }

    // Mostrar medallero
    cout << "\n===== MEDALLERO FINAL =====\n";
    for (int i = 0; i < num_departamentos; i++) {
        cout << departamentos[i] << " --> " << medallas_dep[i] << " medallas\n";
    }

    return 0;
}
       