// Materia: Programacion I,Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Carnet: 12392811
// Carrera del estudiante:Ingenieria de Sistemas
//Fecha de creacion:25/08/2025
// Numero de ejercicio 11
#include <iostream>
using namespace std;
int main ()
{
    int mes;
    cout << "Ingrese el numero de mes " << endl;
    cin >> mes;
    if (mes > 0 && mes < 12 )
    {
        if (mes > 0  &&  mes <=1)
        {
            cout << "El mes es Enero " << endl; 
        }
        if (mes > 1  &&  mes <= 2){
            cout << "El mes es Febrero " << endl;
        }
        if (mes > 2 && mes <= 3)
        {
            cout << "El mes es Marzo " << endl;
        }
        if (mes > 3 && mes <= 4)
        {
            cout << "El mes es Abril " << endl;

        }
        if (mes > 4 && mes <= 5)
        {
            cout << " El mes es Mayo " << endl;

        }
        if (mes > 5 && mes <= 6)
        {
            cout << " El mes es Junio " << endl;

        }
        if (mes > 6 && mes <= 7)
        {
            cout << " El mes es Julio " << endl;

        }
        if (mes > 7 && mes <= 8)
        {
            cout << " El mes es Agosto " << endl;

        }
        if (mes > 8 && mes <= 9)
        {
            cout << " El mes es Septiembre " << endl;

        }
        if (mes > 9 && mes <= 10)
        {
            cout << " El mes es Octubre " << endl;

        }
        if (mes > 10 && mes <= 11)
        {
            cout << " El mes es Noviembre " << endl;

        }
        if (mes > 11 && mes <= 12)
        {
            cout << " El mes es Diciembre " << endl;

        }
        
    }
    else
    {
        cout << "El numero de mes es invalido";
    }
    
    return 0;

}
