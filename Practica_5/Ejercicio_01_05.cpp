// Materia: Programación I, Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Fecha creación: 02/10/2025
// Número de ejercicio: 1
// Problema planteado:1. Escriba un programa con 6 funciones utilizando vectores para lo siguiente:
//a. Una lista de 100 voltajes de precisión doble (entre 20.00 V y 220.00 V)
//b. Una lista de 50 temperaturas de precisión doble (Entre 0.00 y 100.00)
//c. Una lista de 30 caracteres alfanuméricos.
//d. Una lista de 100 años en número entero (entre 1990 y 2025)
//e. Una lista de 32 velocidades de precisión doble (entre 10.00 y 300.00)
//f. Una lista de 1000 distancias de precisión doble (entre 1.00 a 1000.00)
//Los datos debes ser generados utilizando numero aleatorios.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//  Voltajes
void generarVoltajes(double v[100]) {
    for (int i = 0; i < 100; i++) {
        v[i] = 20.0 + (rand() % 20001) / 100.0; 
    }
}
//  Temperaturas
void generarTemperaturas(double t[50]) {
    for (int i = 0; i < 50; i++) {
        t[i] = (rand() % 10001) / 100.0; 
    }
}
//  Caracteres alfanuméricos
void generarCaracteres(char c[30]) {
    for (int i = 0; i < 30; i++) {
        int opcion = rand() % 3; 
        if (opcion == 0)
            c[i] = 48 + rand() % 10;       
        else if (opcion == 1)
            c[i] = 65 + rand() % 26;       
        else
            c[i] = 97 + rand() % 26;       
    }
}
//  Años enteros
void generarAnios(int anios[100]) {
    for (int i = 0; i < 100; i++) {
        anios[i] = 1990 + rand() % (2025 - 1990 + 1);
    }
}
//  Velocidades
void generarVelocidades(double vel[32]) {
    for (int i = 0; i < 32; i++) {
        vel[i] = 10.0 + (rand() % 29001) / 100.0; 
    }
}
//  Distancias
void generarDistancias(double d[1000]) {
    for (int i = 0; i < 1000; i++) {
        d[i] = 1.0 + (rand() % 100000) / 100.0; 
    }
}

int main() {
    srand(time(NULL)); // semilla aleatoria

    double voltajes[100];
    double temperaturas[50];
    char caracteres[30];
    int anios[100];
    double velocidades[32];
    double distancias[1000];

    // Llamar funciones para ejecutarse
    generarVoltajes(voltajes);
    generarTemperaturas(temperaturas);
    generarCaracteres(caracteres);
    generarAnios(anios);
    generarVelocidades(velocidades);
    generarDistancias(distancias);

    // Mostrar resultados exactos
    cout << "=== Lista de 100 voltajes ===" << endl;
    for (int i = 0; i < 100; i++) cout << voltajes[i] << " ";
    cout << endl << endl;

    cout << "=== Lista de 50 temperaturas ===" << endl;
    for (int i = 0; i < 50; i++) cout << temperaturas[i] << " ";
    cout << endl << endl;

    cout << "=== Lista de 30 caracteres alfanumericos ===" << endl;
    for (int i = 0; i < 30; i++) cout << caracteres[i] << " ";
    cout << endl << endl;

    cout << "=== Lista de 100 anios ===" << endl;
    for (int i = 0; i < 100; i++) cout << anios[i] << " ";
    cout << endl << endl;

    cout << "=== Lista de 32 velocidades ===" << endl;
    for (int i = 0; i < 32; i++) cout << velocidades[i] << " ";
    cout << endl << endl;

    cout << "=== Lista de 1000 distancias ===" << endl;
    for (int i = 0; i < 1000; i++) cout << distancias[i] << " ";
    cout << endl << endl;

    return 0;
}


