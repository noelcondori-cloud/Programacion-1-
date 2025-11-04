// Materia: Programación I, Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Fecha creación: 04/11/2025
// Número de ejercicio: 4
#include <iostream>
#include <vector>
using namespace std;

// Estructura empleado
struct Empleado {
    string nombre;
    string genero;
    float salario;
};

int main() {
    int N;
    cout << "Cuantos empleados deseas registrar? ";
    cin >> N;

    vector<Empleado> empleados(N);

    cin.ignore(); // limpiar buffer

    // Registro
    for (int i = 0; i < N; i++) {
        cout << "\n=== Empleado " << i + 1 << " ===\n";

        cout << "Nombre: ";
        getline(cin, empleados[i].nombre);

        cout << "Genero: ";
        getline(cin, empleados[i].genero);

        cout << "Salario: ";
        cin >> empleados[i].salario;

        cin.ignore();
    }

    // Buscar menor y mayor salario
    int indice_menor = 0;
    int indice_mayor = 0;

    for (int i = 1; i < N; i++) {
        if (empleados[i].salario < empleados[indice_menor].salario) {
            indice_menor = i;
        }
        if (empleados[i].salario > empleados[indice_mayor].salario) {
            indice_mayor = i;
        }
    }

    // Mostrar resultados
    cout << "\n=== Empleado con MENOR salario ===\n";
    cout << "Nombre: " << empleados[indice_menor].nombre << endl;
    cout << "Genero: " << empleados[indice_menor].genero << endl;
    cout << "Salario: " << empleados[indice_menor].salario << endl;

    cout << "\n=== Empleado con MAYOR salario ===\n";
    cout << "Nombre: " << empleados[indice_mayor].nombre << endl;
    cout << "Genero: " << empleados[indice_mayor].genero << endl;
    cout << "Salario: " << empleados[indice_mayor].salario << endl;

    return 0;
}
