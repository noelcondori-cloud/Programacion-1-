// Materia: Programacion I,Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Carnet: 12392811
// Carrera del estudiante:Ingenieria de Sistemas
//Fecha de creacion:18/09/2025
// Numero de ejercicio 4
#include<bits/stdc++.h>
using namespace std;
int ConvertirCelsiusAFahrenheit(double celsius){
    return((celsius * 9.0/5.0)+32);
}
double mayortemperatura(double tem1,double tem2){
    if (tem1>tem2){
        return tem1;
    }
    else{
        return tem2;
    }
}
int main()
{
    double temperatura1,temperatura2;
    cout << "Ingrese 2 temperaturas : "<<endl;
    cout <<"Ingrese la 1era temperatura :" << endl;
    cin >> temperatura1;
    cout <<"Ingrese la 2da temperatura :" << endl;
    cin >> temperatura2;
    double convertida1=ConvertirCelsiusAFahrenheit(temperatura1);
    double convertida2=ConvertirCelsiusAFahrenheit(temperatura2);
    cout << "\nTemperaturas convertidas a Fahrenheit:" << endl;
    cout << "Primera temperatura: " << convertida1 << " F" << endl;
    cout << "Segunda temperatura: " << convertida2 << " F" << endl;
    double mayor = mayortemperatura(temperatura1,temperatura2);
    cout << "\nLa mayor temperatura ingresada es: " << mayor << " C" << endl;
    return 0;


}
