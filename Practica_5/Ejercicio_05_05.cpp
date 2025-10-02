// Materia: Programación I, Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Fecha creación: 02/10/2025
// Número de ejercicio: 5
// Problema planteado:5 Leer 2 vectores de dimensión N y combine ambos en otro vector.
#include <iostream>
#include <vector>

using namespace std;

vector<int> ingresar(int n){
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cout << "Ingrese el valor " << i + 1 << ":\n";//Ingresar el valor 
        cin >> v[i];
    }
    return v;
}

vector<int> combiar(vector<int> v1, vector<int> v2){
    vector<int> v3;
    for(int i : v1){
        v3.push_back(i);
    }
    
    for(int i : v2){
        v3.push_back(i);
    }
    
    return v3;
}

int main()
{
    int n;
    cout << "ingrese el tamanio de los vectores: " << endl;
    cin >> n;
    vector<int> v1 = ingresar(n);
    vector<int> v2 = ingresar(n);
    
    vector<int> v3 = combiar(v1, v2);
    
    for(int i : v3){
        cout << i << "\t";
    }
    return 0;
}
