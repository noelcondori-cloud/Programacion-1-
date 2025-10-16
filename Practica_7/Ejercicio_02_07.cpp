// Materia: Programacion 1, Paralelo 4
// Autor: Condori Quispe Noel F ernando
// Carnet: 12392811 L.P.
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha de Creacion: 15/10/25
// Numero de Ejercicio: 2
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
void generarMatriz(vector< vector<int> > &matriz, int n, int A, int B) 
{
    srand(time(0));
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            matriz[i][j] = A + rand() % (B - A + 1);
        }
    }
}
void mostrarMatriz(const vector< vector<int> > &matriz, int n) 
{
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}
int sumaUltimaColumna(const vector< vector<int> > &matriz, int n) 
{
    int suma = 0;
    for (int i = 0; i < n; i++) 
    {
        suma += matriz[i][n - 1];
    }
    return suma;
}
int productoUltimaFila(const vector< vector<int> > &matriz, int n) 
{
    int producto = 1;
    for (int j = 0; j < n; j++) 
    {
        producto *= matriz[n - 1][j];
    }
    return producto;
}
void mayorValor(const vector< vector<int> > &matriz, int n, int &mayor, int &fila, int &columna) 
{
    mayor = matriz[0][0];
    fila = 0;
    columna = 0;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (matriz[i][j] > mayor) 
            {
                mayor = matriz[i][j];
                fila = i;
                columna = j;
            }
        }
    }
}
double desviacionEstandar(const vector< vector<int> > &matriz, int n) 
{
    double suma = 0, sumaCuadrados = 0;
    int total = n * n;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            suma += matriz[i][j];
            sumaCuadrados += pow(matriz[i][j], 2);
        }
    }
    double media = suma / total;
    double varianza = (sumaCuadrados / total) - pow(media, 2);
    return sqrt(varianza);
}
int main() 
{
    int n, A, B;
    cout << "Ingrese el tamanio de la matriz cuadrada: ";
    cin >> n;
    cout << "Ingrese el valor minimo (A): ";
    cin >> A;
    cout << "Ingrese el valor maximo (B): ";
    cin >> B;
    vector< vector<int> > matriz(n, vector<int>(n));
    generarMatriz(matriz, n, A, B);
    cout << "\nMatriz generada:\n";
    mostrarMatriz(matriz, n);
    cout << "\nSuma de la ultima columna: " << sumaUltimaColumna(matriz, n) << endl;
    cout << "Producto de la ultima fila: " << productoUltimaFila(matriz, n) << endl;
    int mayor, fila, columna;
    mayorValor(matriz, n, mayor, fila, columna);
    cout << "Mayor valor: " << mayor << " en posicion [" << fila + 1 << "][" << columna + 1 << "]" << endl;
    cout << "Desviacion estandar: " << desviacionEstandar(matriz, n) << endl;
    return 0;
}
