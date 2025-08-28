// Materia: Programacion I,Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Carnet: 12392811
// Carrera del estudiante:Ingenieria de Sistemas
//Fecha de creacion:27/08/2025
// Numero de ejercicio 20
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Ingrese un numero:" << endl;
    cin >> n;
    int digitos = 0;
    while (n > 0){
        digitos = digitos + 1;
        n /= 10;
    }
    
    cout << "La cantidad de digitos del numero es: " << digitos << endl;
    return 0;
}