// Materia: Programacion I,Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Carnet: 12392811
// Carrera del estudiante:Ingenieria de Sistemas
//Fecha de creacion:26/08/2025
// Numero de ejercicio 9
#include <iostream>
using namespace std;
int main ()
{
    int numero=0;
    cout << "Ingrese su edad " << endl;
    cin >> numero;
    if (numero > 0 && numero <= 12)
    {
        cout << "Usted es niño " << endl;   
    }
    if (numero > 12 && numero <= 18 )
    {
        cout << "Usted es adolescente" << endl;  
    }
    if (numero > 18 && numero < 60 )
    {
        cout << "Usted es mayor de edad " << endl; 
    }
    if (numero >=60)
    {
        cout << "Usted es adulto mayor " << endl;  
    }
    return 0;  
}