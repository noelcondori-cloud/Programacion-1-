// Materia: Programación I, Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Fecha creación: 21/10/2025
// Número de ejercicio: 6
#include <iostream>
using namespace std;

bool sonIguales(int a[], int b[], int n) {
    if (n == 0) return true;
    if (a[n - 1] != b[n - 1]) return false;
    return sonIguales(a, b, n - 1);
}

int main() {
    int n;
    cout << "Ingrese cantidad de elementos: ";
    cin >> n;
    int a[n], b[n];
    cout << "Ingrese vector A:\n";
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << "Ingrese vector B:\n";
    for (int i = 0; i < n; i++) cin >> b[i];
    if (sonIguales(a, b, n))
        cout << "Los vectores son iguales\n";
    else
        cout << "Los vectores NO son iguales\n";
    return 0;
}
