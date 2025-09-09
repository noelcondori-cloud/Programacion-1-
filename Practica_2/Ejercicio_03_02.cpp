// Materia: Programacion I,Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Carnet: 12392811
// Carrera del estudiante:Ingenieria de Sistemas
//Fecha de creacion:09/09/2025
// Numero de ejercicio 3
#include <bits/stdc++.h>
using namespace std;

int main() {
    srand(time(0));
    int num = rand() % 10 + 1;
    long long factorial = 1;
    for (int i = 1; i < num; i++)
    {
        factorial *= i;
    }
    cout << "Numero aleatorio generado : " << num << endl;
    cout << "Factorial de : " << num << " es: " << factorial <<  endl;
    return 0;
}