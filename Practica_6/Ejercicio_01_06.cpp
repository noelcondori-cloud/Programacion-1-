// Materia: Programación I, Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Fecha creación: 09/10/2025
// Número de ejercicio: 1
// Problema planteado:1
#include <iostream>
#include <vector>
#include <cmath>   
using namespace std;

int main() {
    vector<int> edades;   // vector para guardar las edades
    int edad;
    string mensaje = "Ingresa las edades (termina con -1): ";
    cout << mensaje;

    
    while (true) {
        cin >> edad;
        if (edad == -1)   
            break;
        edades.push_back(edad);
    }

    
    
    double suma = 0;
    for (int i = 0; i < edades.size(); i++) {
        suma += edades[i];
    }
    double media = suma / edades.size();
    double suma_diferencias = 0;
    for (int i = 0; i < edades.size(); i++) {
        suma_diferencias += pow(edades[i] - media, 2);
    }
    double desviacion = sqrt(suma_diferencias / edades.size());
    // Mostrar resultados
    cout << "\nLa media de las edades es: " << media << endl;
    cout << "La desviacion tipica es: " << desviacion << endl;

    return 0;
}
