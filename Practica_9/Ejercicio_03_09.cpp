// Materia: Programación I, Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Fecha creación: 04/11/2025
// Número de ejercicio: 3
#include <iostream>
using namespace std;

struct Estudiante {
    int cedula;
    char nombre[50];
    char apellido[50];
    int edad;
    char profesion[50];
    char lugar_nacimiento[50];
    char direccion[100];
    int telefono;
};

int main() {
    int n;
    cout << "Cuantos estudiantes deseas registrar? ";
    cin >> n;
    cin.ignore(); // limpiar buffer

    Estudiante estudiantes[100]; // máximo 100 estudiantes

    // Registro de estudiantes
    for (int i = 0; i < n; i++) {
        cout << "\n=== Estudiante " << i + 1 << " ===\n";

        cout << "Cedula: ";
        cin >> estudiantes[i].cedula;

        cout << "Edad: ";
        cin >> estudiantes[i].edad;
        cin.ignore(); // limpiar buffer para getline

        cout << "Nombre: ";
        cin.getline(estudiantes[i].nombre, 50);

        cout << "Apellido: ";
        cin.getline(estudiantes[i].apellido, 50);

        cout << "Profesion: ";
        cin.getline(estudiantes[i].profesion, 50);

        cout << "Lugar de nacimiento: ";
        cin.getline(estudiantes[i].lugar_nacimiento, 50);

        cout << "Direccion: ";
        cin.getline(estudiantes[i].direccion, 100);

        cout << "Telefono: ";
        cin >> estudiantes[i].telefono;
        cin.ignore(); // limpiar buffer
    }

    // Mostrar datos
    cout << "\n===== DATOS REGISTRADOS =====\n";

    for (int i = 0; i < n; i++) {
        cout << "\n--- Estudiante " << i + 1 << " ---\n";
        cout << "Cedula: " << estudiantes[i].cedula << endl;
        cout << "Nombre: " << estudiantes[i].nombre << endl;
        cout << "Apellido: " << estudiantes[i].apellido << endl;
        cout << "Edad: " << estudiantes[i].edad << endl;
        cout << "Profesion: " << estudiantes[i].profesion << endl;
        cout << "Lugar de Nacimiento: " << estudiantes[i].lugar_nacimiento << endl;
        cout << "Direccion: " << estudiantes[i].direccion << endl;
        cout << "Telefono: " << estudiantes[i].telefono << endl;
    }

    return 0;
}

