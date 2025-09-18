// Materia: Programacion I,Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Carnet: 12392811
// Carrera del estudiante:Ingenieria de Sistemas
//Fecha de creacion:18/09/2025
// Numero de ejercicio 8
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

double descuento (double &total){
    double d = total * 0.05;
    total = total - d;
    return d;
}

double IVA (double total){
    double impuesto = total * 0.13;
    return impuesto;
}

int main()
{
    srand(time(NULL));
    int n, precio;
    precio = rand()%(50 - 20) + 20 + 1;
    
    cout << "Ingrese la cantidad de productos" << endl;
    cin >> n;
    
    cout << "Cada producto cuesta: " << precio << endl;
    
    double total = n * precio;
    double des = 0.0;
    
    cout << "El total de ganancia es: " << total << endl;
    
    if(total >= 2500.0){
        des = descuento(total);
    }
    
    cout << "Se aplico un descuento de: " << des << endl;
    cout << "La ganancia despues del descuento es: " << total << endl;
    double imp = IVA(total);
    cout << "El impuesto a pagar por IVA es de: " << imp << endl;
    
}

