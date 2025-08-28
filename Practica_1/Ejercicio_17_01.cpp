
#include <iostream>
using namespace std;
int sumaDivisoresPropios(int n) {
    int suma = 0;
    for (int i = 1; i < n; ++i) {
        if (n % i == 0) {
            suma += i;
        }
    }
    return suma;
}
bool sonAmigos(int a, int b) {
    return sumaDivisoresPropios(a) == b && sumaDivisoresPropios(b) == a;
}

int main() {
    int num1, num2;

    cout << "Ingresa el primer numero: ";
    cin >> num1;
    cout << "Ingresa el segundo numero: ";
    cin >> num2;

    if (sonAmigos(num1, num2)) {
        cout << num1 << " y " << num2 << " son numeros amigos." << endl;
    } else {
        cout << num1 << " y " << num2 << " NO son números amigos." << endl;
    }

    return 0;
}

