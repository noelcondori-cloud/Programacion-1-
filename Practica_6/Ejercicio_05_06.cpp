// Materia: Programación I, Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Fecha creación: 09/10/2025
// Número de ejercicio: 5
// Problema planteado:5
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n1, n2;
    vector<string> empresaA;
    vector<string> empresaB;
    vector<string> comunes; 

    cout << "Ingrese la cantidad de clientes de la empresa A: ";
    cin >> n1;

    string nombre;

    cout << "Ingrese los nombres de los clientes de la empresa A:\n";
    for (int i = 0; i < n1; i++) {
        cin >> nombre;
        empresaA.push_back(nombre);
    }

    cout << "\nIngrese la cantidad de clientes de la empresa B: ";
    cin >> n2;

    cout << "Ingrese los nombres de los clientes de la empresa B:\n";
    for (int i = 0; i < n2; i++) {
        cin >> nombre;
        empresaB.push_back(nombre);
    }

   
    for (int i = 0; i < empresaA.size(); i++) {
        for (int j = 0; j < empresaB.size(); j++) {
            if (empresaA[i] == empresaB[j]) {
                comunes.push_back(empresaA[i]);
                
            }
        }
    }
    cout << "\nClientes en comun entre ambas empresas:\n";
    if (comunes.size() == 0) {
        cout << "No hay clientes repetidos." << endl;
    } else {
        for (int i = 0; i < comunes.size(); i++) {
            cout << comunes[i] << endl;
        }
    }

    return 0;
}
