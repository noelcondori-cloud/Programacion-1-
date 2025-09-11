// Materia: Programacion I,Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Carnet: 12392811
// Carrera del estudiante:Ingenieria de Sistemas
//Fecha de creacion:11/09/2025
// Numero de ejercicio 4
#include<bits/stdc++.h>
using namespace std;
double calcularIMC(double peso,double altura){
    return peso / pow(altura, 2);
}
int main ()
{
    double peso,altura,imc;
    cout << "Ingrese su peso en kilogramos :" << endl;
    cin >> peso;
    cout << "Ingrese su altura en metros :" << endl;
    cin >> altura;
    imc = calcularIMC(peso,altura);
    cout << "Tu IMC es : " << imc << endl;
    if (imc < 18.5)
    {
        cout << "Bajo de peso "<< endl;
    }
    else if (imc < 25)
    {
        cout << "Normal "<< endl;
    }
    else if (imc < 30)
    {
        cout << "Sobrepeso "<< endl;
    }
    else
    {
        cout << "Obesidad "<< endl;
    }
    return 0;
    
    
    
    

} 

