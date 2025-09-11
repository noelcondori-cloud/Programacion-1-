// Materia: Programacion I,Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Carnet: 12392811
// Carrera del estudiante:Ingenieria de Sistemas
//Fecha de creacion:11/09/2025
// Numero de ejercicio 7
#include <bits/stdc++.h>
using namespace std;


int generarEdad() {
    return rand() % 35 + 1; 
}
double generarAltura() {
    return rand() % 81 + 120;
}

int main() {
    srand(time(NULL)); 

    int N;
    cout << "Ingrese la cantidad de alumnos: " << endl;
    cin >> N;

    int edad, sumaEdades = 0, contadorMayores18 = 0;
    double altura, sumaAlturas = 0;
    int contadorAltura175 = 0;

    for(int i = 1; i <= N; i++) {
        edad = generarEdad();
        altura = generarAltura();
        cout << "Alumno " << i << ": Edad = " << edad << ", Altura = " << altura << " cm" << endl;
        sumaEdades += edad;
        sumaAlturas += altura;

        if(edad > 18) contadorMayores18++;
        if(altura > 175) contadorAltura175++;
    }
    double edadMedia = double(sumaEdades) / N;
    double alturaMedia = sumaAlturas / N;

    cout << "Edad media: " << edadMedia << endl;
    cout << "Altura media: " << alturaMedia << " cm" << endl;
    cout << "Cantidad de alumnos mayores de 18 anos: " << contadorMayores18 << endl;
    cout << "Cantidad de alumnos con altura mayor a 1.75 m: " << contadorAltura175 << endl;

    return 0;
}
