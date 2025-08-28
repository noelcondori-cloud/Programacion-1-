// Materia: Programacion I,Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Carnet: 12392811
// Carrera del estudiante:Ingenieria de Sistemas
//Fecha de creacion:25/08/2025
// Numero de ejercicio 12
#include <iostream>
using namespace std;
int main ()
{
    int numero;
    do
    {
        cout << "Ingrese un numero del 1 al 5 " << endl;
        cin >> numero;
    } while ((numero <  1) ||  (numero  > 5));
    
    
    return 0;
}
