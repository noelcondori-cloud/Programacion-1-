// Materia: Programación I, Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Fecha creación: 09/10/2025
// Número de ejercicio: 12
// Problema planteado:12
#include <iostream>
#include <vector>
#include <string>

using namespace std;

char aMinuscula(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 32;
    }
    return c;
}

bool esLetra(char c) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return true;
    }
    return false;
}

bool esPalindromo(string texto) {
    vector<char> letras;
    int i = 0;

    while (i < texto.size()) {
        if (esLetra(texto[i])) {
            letras.push_back(aMinuscula(texto[i]));
        }
        i = i + 1;
    }

    int inicio = 0;
    int fin = letras.size() - 1;

    while (inicio < fin) {
        if (letras[inicio] != letras[fin]) {
            return false;
        }
        inicio = inicio + 1;
        fin = fin - 1;
    }

    return true;
}

int main() {
    string texto;
    cout << "Ingresa un texto: ";
    getline(cin, texto);

    if (esPalindromo(texto)) {
        cout << "Es palindromo" << endl;
    } else {
        cout << "No es palindromo" << endl;
    }

    return 0;
}
