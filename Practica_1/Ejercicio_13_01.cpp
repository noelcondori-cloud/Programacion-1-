// Materia: Programacion I,Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Carnet: 12392811
// Carrera del estudiante:Ingenieria de Sistemas
//Fecha de creacion:27/08/2025
// Numero de ejercicio 13
#include <iostream>
using namespace std;
int main ()
{
    int numero=0;
    int suma=0;
    cout << "Ingrese el valor para calcular " << endl;
    cin >> numero;
    for (int i = 1; i <= numero; i++) 
            suma += i; 
     cout << " la suma de los numeros es " << suma << endl;   
    return 0;        
        
}

