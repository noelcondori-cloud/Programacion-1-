// Materia: Programación I, Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Fecha creación: 11/11/2025
// Número de ejercicio: 2
#include <bits/stdc++.h>
using namespace std;

void LeerArchivo() {
    ifstream archivo("texto.txt");
    string palabra;
    int contadorPalabras = 0;

    if (!archivo) {
        cout << "No se pudo abrir el archivo" << endl;
        return;
    }

    while (archivo >> palabra) {
        contadorPalabras++;
    }

    cout << "Numero de palabras: " << contadorPalabras << endl;
}
// El archivo se cierra automáticamente al salir de la función

int main() {
    LeerArchivo();
    return 0;
}
