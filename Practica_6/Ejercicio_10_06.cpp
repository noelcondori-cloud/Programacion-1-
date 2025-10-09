// Materia: Programación I, Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Fecha creación: 09/10/2025
// Número de ejercicio: 10
// Problema planteado:10
#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto;
    string resultado = "";

    cout << "Ingrese una cadena: ";
    cin >> texto; 

    for (int i = 0; i < texto.length(); i++) {
       
        if (texto[i] < '0' || texto[i] > '9') {
            resultado = resultado + texto[i];
        }
    }

    cout << "Cadena sin digitos: " << resultado << endl;

    return 0;
}
