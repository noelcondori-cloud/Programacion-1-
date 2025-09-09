// Materia: Programacion I,Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Carnet: 12392811
// Carrera del estudiante:Ingenieria de Sistemas
//Fecha de creacion:09/09/2025
// Numero de ejercicio 2
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "ingrese la cantidad de giros que desee dar" << endl;
    cin >> n;
    srand(time(0));
    int caras = 0 , cruces = 0;
    for (int i = 0; i < n; i++){
        int lanzamiento = rand() % 2;
        if (lanzamiento == 0)
             caras++;
        else 
            cruces++;
    }
    double porcentajedecaras = (caras * 100.0) / n;
    double porcentajedecruces = (cruces * 100.0) / n;

    cout << "cantidad de caras  : " << caras << " (" << porcentajedecaras << "%)" << endl;
    cout << "cantidad de caras  : " << cruces  << " (" <<  porcentajedecruces << "%)" << endl;
    return 0;

    
   

}