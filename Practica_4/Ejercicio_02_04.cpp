
// Materia: Programacion I,Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Carnet: 12392811
// Carrera del estudiante:Ingenieria de Sistemas
//Fecha de creacion:18/09/2025
// Numero de ejercicio 2
#include<bits/stdc++.h>
using namespace std;
double calcular_volumen(double radio,double altura=10){
    return M_PI*radio*radio*altura;
}
int main ()
{
    double radio ;
    cout << "Ingrese el valor del radio a calcular " << endl;
    cin >> radio;
    cout << " volumen del radio : " << radio << " y " << "la altura (10): " <<  endl;
    cout << calcular_volumen(radio);
    
    return 0;
}
