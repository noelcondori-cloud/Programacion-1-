// Materia: Programacion I,Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Carnet: 12392811
// Carrera del estudiante:Ingenieria de Sistemas
//Fecha de creacion:09/09/2025
// Numero de ejercicio 5
#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cout << "Ingrese la cantidad de numeros a generar: ";
    cin >> N;

    srand(time(0)); 

    int numero;
    long long suma = 0;   
    int mayor = 0;         
    int menor = 1001;      

   
    for (int i = 0; i < N; i++) {
        numero = rand() % 1000 + 1; 
        cout << numero << " ";       

        suma += numero;              

        if (numero > mayor) mayor = numero; 
        if (numero < menor) menor = numero; 
    }
    cout << endl;

    double promedio = (double)suma / N; 

    
    cout << "Sumatoria: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Mayor valor: " << mayor << endl;
    cout << "Menor valor: " << menor << endl;

    return 0;
}

