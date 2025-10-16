#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el valor de n: ";
    cin >> n;

    int matriz[50][50]; 
    for (int i = 0; i < n; i++) {
        int valor = 1 + (2 * i); 
        for (int j = 0; j < n; j++) {
            matriz[i][j] = valor + j;
        }
    }
    cout << "\nMatriz generada:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
