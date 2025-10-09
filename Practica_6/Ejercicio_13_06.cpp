// Materia: Programación I, Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Fecha creación: 09/10/2025
// Número de ejercicio: 13
// Problema planteado:13
#include <iostream>
#include <string>
#include <vector>

using namespace std;


char aMayuscula(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - 32; 
    }
    return c;
}


string capitalizar(string texto) {
    vector<char> letras;
    int i = 0;
    bool inicioPalabra = true; // La primera letra es inicio de palabra

    while (i < texto.size()) {
        char c = texto[i];

        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            if (inicioPalabra) {
                c = aMayuscula(c);
                inicioPalabra = false;
            }
        } else {
            inicioPalabra = true;
        }

        letras.push_back(c);
        i = i + 1;
    }
    string resultado = "";
    int j = 0;
    while (j < letras.size()) {
        resultado = resultado + letras[j];
        j = j + 1;
    }

    return resultado;
}

int main() {
    string texto;
    cout << "Ingresa un texto: ";
    getline(cin, texto);

    string textoCapitalizado = capitalizar(texto);
    cout << "Texto capitalizado: " << textoCapitalizado << endl;

    return 0;
}
