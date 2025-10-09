// Materia: Programación I, Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Fecha creación: 09/10/2025
// Número de ejercicio: 3
// Problema planteado:3
#include <iostream>
#include <vector>
#include <cstdlib>   
#include <ctime>     
using namespace std;

int main() {
    vector<string> nombres = {"Willy", "Noel", "Carlos", "Marta", "Jose", "Elena", "Pedro", "Lucia", "Diego", "Rosa"};
    vector<string> apellidos = {"Tenorio", "Condori", "Lopez", "Torres", "Diaz", "Vargas", "Rojas", "Castro", "Suarez", "Mendoza"};
    vector<int> edades = {18, 20, 25, 30, 22, 28, 35, 40, 45, 50};

    int n; 
    cout << "Ingrese la cantidad de datos que desea generar: ";
    cin >> n;
    if (n <= 0) {
        cout << "Cantidad no valida." << endl;
        return 0;
    }
    srand(time(0));

    cout << "\nGenerando " << n << " personas al azar:\n";
    cout << "----------------------------------\n";

    for (int i = 0; i < n; i++) {
        int posNombre = rand() % 10; 
        int posApellido = rand() % 10;
        int posEdad = rand() % 10;

        cout << i + 1 << ". " << nombres[posNombre] << " " 
             << apellidos[posApellido] << " - Edad: " 
             << edades[posEdad] << endl;
    }

    return 0;
}
