// Materia: Programacion I,Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Carnet: 12392811
// Carrera del estudiante:Ingenieria de Sistemas
//Fecha de creacion:11/09/2025
// Numero de ejercicio 6
#include<bits/stdc++.h>
using namespace std;
bool esbisiesto(int año)
{
    return (año % 4 ==0 && año % 100 !=0) || (año % 400 ==0);
}
int diasdel_mes(int año,int mes)
{
    switch (mes)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        return 31;
    case 4: case 6: case 9: case 11: 
        return 30;
    case 2:
        if (esbisiesto(año))
        {
           return 29;
        }
        else
        {
            return 28;
        }
    default:
        return -1;
    }

}
int main() {
    int año, mes;

    cout << "Ingresa el ano: ";
    cin >> año;
    cout << "Ingresa el mes (1-12): ";
    cin >> mes;

    int dias = diasdel_mes(año, mes);

    if (dias == -1)
        cout << "Mes invalido" << endl;
    else
        cout << "El mes " << mes << " del ano " << año << " tiene " << dias << " dias." << endl;

    return 0;
}
