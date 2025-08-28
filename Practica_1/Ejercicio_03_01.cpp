// Materia: Programacion I,Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Carnet: 12392811
// Carrera del estudiante:Ingenieria de Sistemas
//Fecha de creacion:26/08/2025
// Numero de ejercicio 3
#include <iostream>
using namespace std;
int main ()
{
    int base=0;
    int altura=0;
    int areadeltriangulo=0;
    cout << "Ingrese la base del triangulo " << endl;
    cin >> base;
    cout << "Ingrese la altura del triangulo " << endl;
    cin >> altura;
    areadeltriangulo= base * altura /2;
    cout << "El area del triangulo es :" << endl;
    cout << "Area = " << areadeltriangulo << endl;
    return 0;
}