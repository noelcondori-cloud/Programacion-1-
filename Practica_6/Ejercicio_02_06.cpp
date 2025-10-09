// Materia: Programación I, Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Fecha creación: 09/10/2025
// Número de ejercicio: 2
// Problema planteado:2
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> minerales = {"SN", "SB", "AU", "PT", "AG", "CU"};
    vector<double> produccion = {998.000, 876.500, 786.670, 636.143, 135.567, 109.412};

    string buscar;
    cout << "Ingrese el nombre del mineral a buscar (SN, SB, AU, PT, AG, CU): ";
    cin >> buscar;

    bool encontrado = false;
    for (int i = 0; i < minerales.size(); i++) {
        if (minerales[i] == buscar) {
            cout << "Produccion de " << minerales[i] << ": " << produccion[i] << " toneladas metricas." << endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "Mineral no encontrado." << endl;
    }
    for (int i = 0; i < produccion.size() - 1; i++) {
        for (int j = 0; j < produccion.size() - i - 1; j++) {
            if (produccion[j] < produccion[j + 1]) {
                double tempP = produccion[j];
                produccion[j] = produccion[j + 1];
                produccion[j + 1] = tempP;
                string tempM = minerales[j];
                minerales[j] = minerales[j + 1];
                minerales[j + 1] = tempM;
            }
        }
    }

    // Mostrar resultados ordenados
    cout << "\nMineral\tProduccion (Tm)\n";
    cout << "--------------------------\n";
    for (int i = 0; i < minerales.size(); i++) {
        cout << minerales[i] << "\t" << produccion[i] << endl;
    }

    return 0;
}
