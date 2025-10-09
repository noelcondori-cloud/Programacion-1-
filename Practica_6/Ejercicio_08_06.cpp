// Materia: Programación I, Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Fecha creación: 09/10/2025
// Número de ejercicio: 8
// Problema planteado:8
#include <iostream>
#include <string>
using namespace std;

int main() {
    string correo;
    cout << "Ingrese una direccion de correo electronico: ";
    cin >> correo;

    int contadorArroba = 0;
    int posicionArroba = -1;
    bool tienePuntoDespues = false;
    for (int i = 0; i < correo.length(); i++) {
        if (correo[i] == '@') {
            contadorArroba++;
            posicionArroba = i;
        }
    }
    if (posicionArroba != -1) {
        for (int i = posicionArroba + 1; i < correo.length(); i++) {
            if (correo[i] == '.') {
                tienePuntoDespues = true;
            }
        }
    }
    if (contadorArroba == 1 && tienePuntoDespues) {
        cout << "Correo electronico valido" << endl;
    } else {
        cout << "Correo electronico invalido" << endl;
    }

    return 0;
}
