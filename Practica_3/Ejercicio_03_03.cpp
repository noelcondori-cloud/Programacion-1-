// Materia: Programacion I,Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Carnet: 12392811
// Carrera del estudiante:Ingenieria de Sistemas
//Fecha de creacion:10/09/2025
// Numero de ejercicio 3
#include<bits/stdc++.h>
using namespace std;
bool capicuaes(int numero)
{
    int original = numero;
    int invertido =0;
    while (numero > 0)
    {
        int digito = numero % 10;
        invertido = (invertido * 10) + digito;
        numero /= 10;
    }
    return original == invertido;

}
int main()
{
    int n;
    cout << "Ingrese un numero " << endl;
    cin >> n;
    if (capicuaes(n))
    {
        cout << "El numero ingresado es capicua " << endl;
    }
    else
    {
        cout << "El numero ingresado no es capicua " << endl;
    }
    return 0;
   
    
    
}

