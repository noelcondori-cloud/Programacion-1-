// Materia: Programacion I,Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Carnet: 12392811
// Carrera del estudiante:Ingenieria de Sistemas
//Fecha de creacion:10/09/2025
// Numero de ejercicio 1
#include<bits/stdc++.h>
using namespace std;
void numeroparoimpar(int numero)
{
    if (numero % 2 == 0 )
    {
        cout << "El numero es par " << endl;
    }
    else
    {
        cout << "El numero es impar " << endl;
    }
   
   
    
    
}
int main ()
 {
        int n;
        cout << "Ingrese el numero " << endl;
        cin >> n;
        
        numeroparoimpar(n);
        
        return 0;


       }
 