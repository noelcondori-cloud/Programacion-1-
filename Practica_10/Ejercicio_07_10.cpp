// Materia: Programación I, Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Fecha creación: 11/11/2025
// Número de ejercicio: 7
#include <bits/stdc++.h>
using namespace std;

void CalcularPromedios() {
    ifstream entrada("calificaciones.txt");
    ofstream salida("promedios.txt");

    char nombre[50];       // nombre del estudiante
    char linea[200];       
    int nota;
    int suma, contador;

    if (entrada.fail()) {
        cout << "No se pudo abrir calificaciones.txt para leer.\n";
        exit(1);
    }

    if (salida.fail()) {
        cout << "No se pudo crear promedios.txt.\n";
        exit(1);
    }

    // Leer línea por línea
    while (entrada.getline(linea, 200)) {

        suma = 0;
        contador = 0;

       
        char *token = strtok(linea, " ");  
        strcpy(nombre, token);             // primer token es el nombre

        token = strtok(NULL, " ");         
        while (token != NULL) {
            nota = atoi(token);   // convertir char → int
            suma += nota;
            contador++;
            token = strtok(NULL, " ");
        }

        // Evitar dividir entre cero
        float promedio = 0;
        if (contador > 0) {
            promedio = (float)suma / contador;
        }

        // Guardar en el archivo de salida
        salida << nombre << " " << promedio << endl;
    }

    entrada.close();
    salida.close();

    cout << "Archivo promedios.txt generado correctamente.\n";
}

int main() {
    CalcularPromedios();
    return 0;
}
