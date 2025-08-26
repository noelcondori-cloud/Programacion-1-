// Materia: Programacion I,Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Carnet: 12392811
// Carrera del estudiante:Ingenieria de Sistemas
//Fecha de creacion:26/08/2025
// Numero de ejercicio 4
#include <iostream>
using namespace std;
int main ()
{
    int radio=0;
    int volumen=0;
    cout << "Ingrese el radio de la esfera" << endl;
    cin >> radio;
    volumen=(4.0/3.0) * 3.141592 * radio * radio * radio;
    cout << "El volumen de la esfera es :" << endl;
    cout << "Volumen = " << volumen << endl;
    return 0;
}