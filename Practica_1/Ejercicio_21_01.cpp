// Materia: Programacion I,Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Carnet: 12392811
// Carrera del estudiante:Ingenieria de Sistemas
//Fecha de creacion:28/08/2025
// Numero de ejercicio 21
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Ingrese los 2 numeros a multiplicar:"<<endl;
    cin >> a >> b;
    int res = 0;
    for(int i = 0; i < b; i++){
        res += a;
    }
    cout << "El resultado es " << res << endl; 
    return 0;
}