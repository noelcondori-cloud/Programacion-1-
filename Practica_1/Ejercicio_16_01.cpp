// Materia: Programacion I,Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Carnet: 12392811
// Carrera del estudiante:Ingenieria de Sistemas
//Fecha de creacion:27/08/2025
// Numero de ejercicio 16
#include <iostream>
using namespace std;
int main ()
{
    int numero;
    int contador=0;
    cout << "Ingrese en numero : " << endl;
    cin >> numero;
    for (int i = 1; i <= numero; i++)
    {
        if (numero % i == 0)
        {
            contador++;
        }
        
    }
    
    
    
    if (contador == 2)
    {
    
        cout << "El numero " << numero << endl << "es primo " << endl;
    }
    else
    {
        cout << "El numero " << numero << endl << " no es primo " << endl;
    }
    return 0;
    
}

