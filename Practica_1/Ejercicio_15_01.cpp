#include <iostream>
using namespace std;
int main ()
{
    double N_denotas;
    double  Notas;
    double suma_de_nota=0;
    cout << "Ingrese la cantidad de notas que desea sumar " << endl;
    cin >> N_denotas;
    for(int i = 1; i <= N_denotas; i++)
    {
        cout << "Ingrese la nota # " << i << endl;
        cin >> Notas;
        suma_de_nota +=Notas;    
    }
    double promedio =suma_de_nota  / N_denotas;
    cout << "El promedio es " << promedio << endl;
    return 0;
}


