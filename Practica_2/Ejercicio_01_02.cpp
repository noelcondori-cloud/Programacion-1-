// Materia: Programacion I,Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Carnet: 12392811
// Carrera del estudiante:Ingenieria de Sistemas
//Fecha de creacion:09/09/2025
// Numero de ejercicio 1
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el numero de lanzamientos: ";
    cin >> n;

    
    srand(time(0));


    int freq2 = 0, freq4 = 0, freq6 = 0;

    
    for (int i = 0; i < n; i++) {
        int lanzamiento = rand() % 6 + 1; 
        if (lanzamiento == 2) freq2++;
        else if (lanzamiento == 4) freq4++;
        else if (lanzamiento == 6) freq6++;
    }

    
    cout << "Lanzamientos totales: " << n << endl;
    cout << "Cara 2: " << freq2 << " veces" << endl;
    cout << "Cara 4: " << freq4 << " veces" << endl;
    cout << "Cara 6: " << freq6 << " veces" << endl;

    return 0;
}
