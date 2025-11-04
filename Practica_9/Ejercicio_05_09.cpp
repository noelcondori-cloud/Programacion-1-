// Materia: Programación I, Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Fecha creación: 04/11/2025
// Número de ejercicio: 5
#include <iostream>
using namespace std;

struct Pelicula {
    char titulo[50];
    char director[50];
    int duracion;
    int anio_estreno;
    char genero[30];
};

// Función para comparar dos cadenas (retorna true si son iguales)
bool compararCadenas(char a[], char b[]) {
    int i = 0;
    while (a[i] != '\0' || b[i] != '\0') {
        if (a[i] != b[i]) return false;
        i++;
    }
    return true;
}

int main() {
    int N;
    cout << "Cuantas peliculas deseas registrar? ";
    cin >> N;
    cin.ignore(); // limpiar buffer

    Pelicula peliculas[100]; // máximo 100 películas

    // Registro de películas
    for (int i = 0; i < N; i++) {
        cout << "\n=== Pelicula " << i + 1 << " ===\n";

        cout << "Titulo: ";
        cin.getline(peliculas[i].titulo, 50);

        cout << "Director: ";
        cin.getline(peliculas[i].director, 50);

        cout << "Duracion (minutos): ";
        cin >> peliculas[i].duracion;

        cout << "Anio de estreno: ";
        cin >> peliculas[i].anio_estreno;
        cin.ignore();

        cout << "Genero: ";
        cin.getline(peliculas[i].genero, 30);
    }

    // Buscar por genero
    char genero_buscar[30];
    cout << "\nIngrese un genero para buscar peliculas: ";
    cin.getline(genero_buscar, 30);

    cout << "\n=== Peliculas con genero '" << genero_buscar << "' ===\n";
    bool encontrado_gen = false;

    for (int i = 0; i < N; i++) {
        if (compararCadenas(peliculas[i].genero, genero_buscar)) {
            encontrado_gen = true;
            cout << "\nTitulo: " << peliculas[i].titulo << endl;
            cout << "Director: " << peliculas[i].director << endl;
            cout << "Duracion: " << peliculas[i].duracion << " min\n";
            cout << "Anio estreno: " << peliculas[i].anio_estreno << endl;
        }
    }

    if (!encontrado_gen) {
        cout << "No se encontraron peliculas de ese genero.\n";
    }

    // Buscar por director
    char director_buscar[50];
    cout << "\nIngrese un director para buscar peliculas: ";
    cin.getline(director_buscar, 50);

    cout << "\n=== Peliculas del director '" << director_buscar << "' ===\n";
    bool encontrado_dir = false;

    for (int i = 0; i < N; i++) {
        if (compararCadenas(peliculas[i].director, director_buscar)) {
            encontrado_dir = true;
            cout << "\nTitulo: " << peliculas[i].titulo << endl;
            cout << "Genero: " << peliculas[i].genero << endl;
            cout << "Duracion: " << peliculas[i].duracion << " min\n";
            cout << "Anio estreno: " << peliculas[i].anio_estreno << endl;
        }
    }

    if (!encontrado_dir) {
        cout << "No se encontraron peliculas de ese director.\n";
    }

    return 0;
}


