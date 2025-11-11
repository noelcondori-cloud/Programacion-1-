// Materia: Programación I, Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Fecha creación: 11/11/2025
// Número de ejercicio: 6
#include <bits/stdc++.h>
using namespace std;

void EscribirFrases() {
    ofstream archivo;
    int nFrases;
    char texto[100];   

    archivo.open("frases.txt", ios::out);

    if (archivo.fail()) {
        cout << "No se pudo abrir el archivo para escribir.";
        exit(1);
    }

    cout << "Ingresa el numero de frases: ";
    cin >> nFrases;
    cin.ignore();  

    for (int i = 0; i < nFrases; i++) {
        cout << "Ingresa la frase " << i + 1 << ": ";
        cin.getline(texto, 100); 
        archivo << texto << endl;
    }

    archivo.close();
}

void LeerFrases() {
    ifstream archivo("frases.txt");
    char linea[100];

    if (archivo.fail()) {
        cout << "No se pudo abrir el archivo para leer.";
        exit(1);
    }

    cout << "\nContenido del archivo de frases:\n";
    
    while (archivo.getline(linea, 100)) {
        cout << linea << endl;
    }

    archivo.close();
}

int main() {
    EscribirFrases();
    LeerFrases();
    return 0;
}
