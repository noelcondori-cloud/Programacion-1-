#include <iostream>
using namespace std;
int main ()
{
    int numero=0;
    int suma=0;
    cout << "Ingrese el valor para calcular " << endl;
    cin >> numero;
    for (int i = 1; i <= numero; i++) 
            suma += i; 
     cout << " la suma de los numeros es " << suma << endl;   
    return 0;        
        
}

