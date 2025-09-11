
// Materia: Programacion I,Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Carnet: 12392811
// Carrera del estudiante:Ingenieria de Sistemas
//Fecha de creacion:10/09/2025
// Numero de ejercicio 2
#include<bits/stdc++.h>
using namespace std;
double celsiusafarenheid(double celsius)
{
    return ((celsius * 9.0 / 5.0)+32);
}
int main ()
{
    double gradosC;
    double gradosF;
    cout << " ingrese el valor en grados celsius" << endl;
    cin >> gradosC;
    gradosF = celsiusafarenheid(gradosC);
     cout << gradosC << " C equivalen a " << gradosF << " F" << endl;
    return 0;

}