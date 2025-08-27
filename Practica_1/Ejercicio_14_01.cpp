// Materia: Programacion I,Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Carnet: 12392811
// Carrera del estudiante:Ingenieria de Sistemas
//Fecha de creacion:27/08/2025
// Numero de ejercicio 14
#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Ingrese un numero:" << endl;
    cin >> N;
    cout << "El triangulo es: " << endl;
    for(int i = 1; i <= N; i++){
        for(int j = 0; j < i; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}