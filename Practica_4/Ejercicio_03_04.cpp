// Materia: Programacion I,Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Carnet: 12392811
// Carrera del estudiante:Ingenieria de Sistemas
//Fecha de creacion:18/09/2025
// Numero de ejercicio 3
#include<bits/stdc++.h>
using namespace std;
#include <iostream>
using namespace std;
void ModificarValores(int &valor1, int &valor2) {
    valor1 = valor1 * 2;  
    valor2 = valor2 + 10; 
}

int main() {
    int a, b;
    cout << "Ingrese el primer valor: ";
    cin >> a;
    cout << "Ingrese el segundo valor: ";
    cin >> b;

    cout << "\nAntes de la funcion:" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    ModificarValores(a, b);

    cout << "\nDespues de la funcion:" << endl;
    cout << "a (multiplicado por 2) = " << a << endl;
    cout << "b (incrementado en 10) = " << b << endl;

    return 0;
}

