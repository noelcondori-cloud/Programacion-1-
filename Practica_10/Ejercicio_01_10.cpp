// Materia: Programación I, Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Fecha creación: 11/11/2025
// Número de ejercicio: 1
#include <bits/stdc++.h>
using namespace std;

void EscribirNombre(){
    ofstream archivo;
    string texto;
    int nNombres;

    archivo.open("nombres.txt",ios::out);

    if (archivo.fail())
    {
        cout<<"No se pudo abrir el archivo para escribir.";
        exit(1);
    }

    cout<<"Ingresa el numero de nombres: ";
    cin>>nNombres;
    cin.ignore();
    for (int i = 0; i < nNombres; i++)
    {
        cout<<"Ingrese el nombre "<<i+1<<" : ";
        getline(cin,texto);
        archivo<<texto<<endl;
    }
    archivo.close();
}

void LeerNombres(){
    ifstream archivo("nombres.txt");
    string linea;

    if (archivo.fail())
    {
        cout<<"No se pudo abrir el archivo para leer";
        exit(1);
    }
    cout<<"\nLista de nombres guardados: "<<endl;
    while (getline(archivo, linea)) {
        cout << linea << endl;
    }
    archivo.close();    
}

int main()
{
    EscribirNombre();
    LeerNombres();
    return 0;
}
