// Materia: Programacion I,Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Carnet: 12392811
// Carrera del estudiante:Ingenieria de Sistemas
//Fecha de creacion:28/08/2025
// Numero de ejercicio 23
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Ingrese un numero: " << endl;
    cin >> n;
    int inv = 0;
    while(n > 0){
        int r = n % 10;
        inv += r;
        inv *= 10;
        n /= 10;
    }
    
    cout << "El numero invertido es " << inv / 10 << endl;
    return 0;
}