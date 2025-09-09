// Materia: Programacion I,Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Carnet: 12392811
// Carrera del estudiante:Ingenieria de Sistemas
//Fecha de creacion:09/09/2025
// Numero de ejercicio 6
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

bool esPrimo(int n){
    if(n <= 1){
        return false;
    }
    
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    
    return true;
}

int main()
{
    srand(time(NULL));
    
    int n;
    
    cout << "Ingrese un numero: " << endl;
    cin >> n;
    
    int primos = 0, aleatorio;
    
    for(int i = 0; i < n; i++){
        aleatorio = rand() % (10001) + 1;
        bool p = esPrimo(aleatorio);
        if(p){
            cout << aleatorio << " es Primo" << endl;
            primos++;
        } else {
            cout << aleatorio << endl;
        }
    }
    
    cout << "Se han generado " << primos << " numeros primos" << endl;
    return 0;
}