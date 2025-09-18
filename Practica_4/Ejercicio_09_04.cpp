// Materia: Programacion I,Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Carnet: 12392811
// Carrera del estudiante:Ingenieria de Sistemas
//Fecha de creacion:18/09/2025
// Numero de ejercicio 9
#include <iostream>

using namespace std;

void salarioBase(double &s, int antiguedad){
    for(int i = 0; i < antiguedad; i++){
        double aumento = s * 0.10;
        s = s + aumento;
    }
}

double comision (double &salario, double precio){
    double ganancia = precio * 10.0;
    double c = ganancia * 0.10;
    salario = salario + c;
    return c;
}

int main()
{
    int n;
    double total = 0.0;
    
    cout << "Ingrese la cantidad de vendedoras" << endl;
    cin >> n;
    
    double precio;
    cout << "Ingrese el precio de los productos" << endl;
    cin >> precio;
    
    double sBase = 2750.0;
    
    for(int i = 1; i <= n; i++){
        cout << "Ingrese los anios de antiguedad de la vendedora " << i << ": " << endl;
        int antiguedad;
        cin >> antiguedad;
        
        salarioBase(sBase, antiguedad);
        
        cout << "Su salario tomando en cuenta su antiguedad es: " << sBase << endl;
        
        double c = comision(sBase, precio);
        
        cout << "Su comision por ventas es de: " << c << endl;
        cout << "Su salario total de la vendedora " << i << " es de: " << sBase << endl;
        
        cout << endl;
        
        sBase = 2750.0;
    }
    
}