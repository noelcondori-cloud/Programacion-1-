// Materia: Programación I, Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Fecha creación: 04/11/2025
// Número de ejercicio: 6
#include <iostream>
#include <vector>
using namespace std;

// Estructura Empleado
struct Empleado {
    string nombre;
    int id;
    float sueldo;
    int antiguedad;
};

// Cuenta cuántos empleados tienen sueldo mayor a un valor dado
int contarMayoresSueldo(const vector<Empleado>& empleados, float valor) {
    int contador = 0;
    for (int i = 0; i < empleados.size(); i++) {
        if (empleados[i].sueldo > valor) {
            contador++;
        }
    }
    return contador;
}

// Calcula el promedio de antigüedad
float promedioAntiguedad(const vector<Empleado>& empleados) {
    int suma = 0;
    for (int i = 0; i < empleados.size(); i++) {
        suma += empleados[i].antiguedad;
    }
    return suma / (float)empleados.size();
}

int main() {
    int N;
    cout << "Cuantos empleados deseas registrar? ";
    cin >> N;

    vector<Empleado> empleados(N);

    cin.ignore();

    // Registro de empleados
    for (int i = 0; i < N; i++) {
        cout << "\n=== Empleado " << i + 1 << " ===\n";

        cout << "Nombre: ";
        getline(cin, empleados[i].nombre);

        cout << "ID: ";
        cin >> empleados[i].id;

        cout << "Sueldo: ";
        cin >> empleados[i].sueldo;

        cout << "Antiguedad (en anios): ";
        cin >> empleados[i].antiguedad;

        cin.ignore();
    }

    // Usar funciones
    float valor_sueldo;
    cout << "\nIngrese un sueldo para contar empleados con sueldo mayor: ";
    cin >> valor_sueldo;

    int cantidad = contarMayoresSueldo(empleados, valor_sueldo);
    cout << "Empleados con sueldo mayor a " << valor_sueldo << ": " << cantidad << endl;

    float promedio = promedioAntiguedad(empleados);
    cout << "Promedio de antiguedad de los empleados: " << promedio << " anios\n";

    return 0;
}
