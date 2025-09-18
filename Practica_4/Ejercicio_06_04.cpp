// Materia: Programacion I,Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Carnet: 12392811
// Carrera del estudiante:Ingenieria de Sistemas
//Fecha de creacion:18/09/2025
// Numero de ejercicio 6
#include <iostream>
using namespace std;
bool esPrimo(int num) {
    if (num < 2) return false; 
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int numero;
    cout << "Ingrese un numero entero: ";
    cin >> numero;

    int suma = 0, digito;
    int temp = numero; 

    
    while (temp > 0) {
        digito = temp % 10;   
        if (digito != 0)      
            suma += digito;   
        temp /= 10;         
    }

    cout << "La suma de los digitos distintos de cero es: " << suma << endl;

    if (esPrimo(suma))
        cout << "La suma ES un numero primo." << endl;
    else
        cout << "La suma NO es un numero primo." << endl;

    return 0;
}
