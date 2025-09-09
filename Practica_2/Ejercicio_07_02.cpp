// Materia: Programacion I,Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Carnet: 12392811
// Carrera del estudiante:Ingenieria de Sistemas
//Fecha de creacion:09/09/2025
// Numero de ejercicio 7
#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cout << "Ingrese la cantidad total de ninos en la guarderia: ";
    cin >> N;

    srand(time(0)); 
    int n1 = rand() % (N + 1);
    int n2 = rand() % (N - n1 + 1);
    int n3 = N - n1 - n2;

    cout << "Ninos de 1 ano: " << n1 << endl;
    cout << "Ninos de 2 anos: " << n2 << endl;
    cout << "Ninos de 3 anos: " << n3 << endl;

    int pañales = n1 * 6 + n2 * 3 + n3 * 2;

    cout << "Consumo total de panales por dia: " << pañales << " panales" << endl;

    return 0;
}

