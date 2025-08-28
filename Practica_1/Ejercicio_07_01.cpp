// Materia: Programacion I,Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Carnet: 12392811
// Carrera del estudiante:Ingenieria de Sistemas
//Fecha de creacion:26/08/2025
// Numero de ejercicio 7
#include <iostream>
using namespace std;

int main()
{
    char caracter;
    cout << "ingrese un caracter" << endl;
    cin >> caracter;
    if((caracter >= 'A' && caracter <= 'Z') || (caracter >= 'a' && caracter <= 'z')){
        if(caracter == 'A' || caracter == 'E' || caracter == 'I' || caracter == 'O' || caracter == 'U' || caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u'){
            cout << "Es una vocal" << endl;
        } else {
            cout << "Es consonante" << endl;
        }
    }else {
        cout << "Es un caracter especial" << endl;
    }
    return 0;
}