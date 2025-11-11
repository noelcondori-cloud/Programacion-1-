
// Materia: Programación I, Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Fecha creación: 11/11/2025
// Número de ejercicio: 3
#include <bits/stdc++.h>
using namespace std;

void EscribirEstudiantes(){
    ofstream archivo("estudiantes.txt");

    string nombre;
    int edad;
    double promedio;

    int n;
    cout<<"Digite el numero de estudiantes: ";
    cin>>n;
    
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        cout << "Nombre: ";
        getline(cin, nombre);
        cout << "Edad: ";
        cin >> edad;
        cout << "Promedio: ";
        cin >> promedio;
        
        archivo << "Nombre: " << nombre << endl;
        archivo << "Edad: " << edad << endl;
        archivo << "Promedio: " << promedio << endl;
        archivo << endl;
    }
    archivo.close();
}

int main()
{
    EscribirEstudiantes();
    return 0;
}