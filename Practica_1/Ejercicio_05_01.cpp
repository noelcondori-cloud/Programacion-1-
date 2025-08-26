// Materia: Programacion I,Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Carnet: 12392811
// Carrera del estudiante:Ingenieria de Sistemas
//Fecha de creacion:25/08/2025
// Numero de ejercicio 5
#include <iostream>
using namespace std;
int main ()
{
    double  centigrados=0;
    double kelvin=273.15;
    cout << "Ingrese el valor en centigrados" << endl;
    cin >> centigrados;
   double  conversion=centigrados + kelvin;
    cout << "El valor en kelvin es :" << endl;
    cout << conversion;
    return 0;
}
