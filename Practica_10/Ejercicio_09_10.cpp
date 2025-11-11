// Materia: Programación I, Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Fecha creación: 11/11/2025
// Número de ejercicio: 9
#include <bits/stdc++.h>
using namespace std;

void escribirMensaje(){
    ofstream archivo("mensaje.txt", ios::app);
    char linea[100];
    cout << "Ingrese su mensaje" << endl;
    cin.getline(linea, 100);
    if(!archivo.is_open()){
        cout << "Error" << endl;
        return;
    }
    
    archivo << linea << "\n";
    archivo.close();
}

void mensajeCifrado(){
    ifstream archivoNormal("mensaje.txt");
    ofstream archivoCifrado("mensaje_cifrado.txt");
    
    if(!archivoNormal.is_open()){
        cout << "Error" << endl;
        return;
    }
    
    if(!archivoCifrado.is_open()){
        cout << "Error tambien" << endl;
        return;
    }
    string linea;
    while(!archivoNormal.eof()){
        getline(archivoNormal, linea);
        string cifrado = "";
        for(int i = 0; i < linea.length(); i++){
            char nuevaLetra = linea[i] + 3;
            cifrado += nuevaLetra;
        }
        archivoCifrado << cifrado << "\n";
    }
    
    archivoNormal.close();
    archivoCifrado.close();
}

int main()
{
    escribirMensaje();
    mensajeCifrado();
    return 0;
}