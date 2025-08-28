// Materia: Programacion I,Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Carnet: 12392811
// Carrera del estudiante:Ingenieria de Sistemas
//Fecha de creacion:28/08/2025
// Numero de ejercicio 25
#include <iostream>
using namespace std;

int main()
{
    int n;
    char continuar;
    do {
        cout << "Ingrese el numero del que quiere generar su tabla" << endl;
        cin >> n;
        for(int i = 1; i <= 10; i++){
            int res = n * i;
            cout << n << " x " << i << " = " << res << endl;
        }
        cout << endl;
        cout << "Desea generar otra tabla? (s/n)" << endl;
        cin >> continuar;
    } while (continuar == 's');
    return 0;
}