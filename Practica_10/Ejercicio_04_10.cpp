// Materia: Programación I, Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Fecha creación: 11/11/2025
// Número de ejercicio: 4
#include <bits/stdc++.h>
using namespace std;

void EscribirDatos() {
    ofstream archivo;
    string texto;
    int nLineas;

    archivo.open("datos.txt", ios::out);

    if (archivo.fail()) {
        cout << "No se pudo abrir el archivo para escribir.";
        exit(1);
    }

    cout << "Ingresa el numero de lineas: ";
    cin >> nLineas;
    cin.ignore();
    
    for (int i = 0; i < nLineas; i++) {
        cout << "Ingrese la linea " << i+1 << " : ";
        getline(cin, texto);
        archivo << texto << endl;
    }
    archivo.close();
}

void BuscarTexto() {
    ifstream archivo("datos.txt");
    string linea, palabra;
    int contador = 0;

    if (archivo.fail()) {
        cout << "No se pudo abrir el archivo para buscar";
        exit(1);
    }

    cout << "\nIngrese la palabra o frase a buscar: ";
    getline(cin, palabra);

    while (getline(archivo, linea)) {
        // Buscar desde el inicio cada vez
        size_t pos = linea.find(palabra);
        while (pos != string::npos) {
            contador++;
            pos = linea.find(palabra, pos + 1);  // Buscar desde la siguiente posicion
        }
    }

    cout << "La palabra/frase '" << palabra << "' aparece " << contador << " veces\n";
    archivo.close();
}

void MostrarContenido() {
    ifstream archivo("datos.txt");
    string linea;

    if (archivo.fail()) {
        cout << "No se pudo abrir el archivo para leer";
        exit(1);
    }
    
    cout << "\nContenido del archivo:" << endl;
    while (getline(archivo, linea)) {
        cout << linea << endl;
    }
    archivo.close();
}

int main() {
    EscribirDatos();
    MostrarContenido();
    BuscarTexto();
    return 0;
}