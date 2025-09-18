// Materia: Programacion I,Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Carnet: 12392811
// Carrera del estudiante:Ingenieria de Sistemas
//Fecha de creacion:18/09/2025
// Numero de ejercicio 1
#include <iostream>
using namespace std;

void intercambiar (int &a, int &b){
    int c = a;
    a = b;
    b = c;
}

int main()
{
    int a, b;
    cout << "Ingrese los valores de las variables" << endl;
    cin >> a >> b;
    
    cout << "La variable a es: " << a << endl;
    cout << "La variable b es: " << b << endl;
    
    cout << endl << endl;
    
    intercambiar(a, b);
    
    cout << "La variable a es: " << a << endl;
    cout << "La variable b es: " << b << endl;

    return 0;
}