// Materia: Programación I, Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Fecha creación: 04/11/2025
// Número de ejercicio: 1
#include <iostream>
using namespace std;
struct Libro {
    char titulo[50];
    char autor[50];
    int anio_publicacion;
    bool disponible;
};

int main() {
    Libro libro; // Solo un libro

    cout << "=== Registro de Libro ===\n";

    cout << "Titulo: ";
    cin.getline(libro.titulo, 50);

    cout << "Autor: ";
    cin.getline(libro.autor, 50);

    cout << "Anio de publicacion: ";
    cin >> libro.anio_publicacion;

    cout << "Esta disponible? (1 = si, 0 = no): ";
    cin >> libro.disponible;

    // Mostrar datos
    cout << "\n=== Datos del Libro Registrado ===\n";
    cout << "Titulo: " << libro.titulo << endl;
    cout << "Autor: " << libro.autor << endl;
    cout << "Anio: " << libro.anio_publicacion << endl;

    if (libro.disponible)
        cout << "Estado: Disponible\n";
    else
        cout << "Estado: No disponible\n";

    return 0;
}
