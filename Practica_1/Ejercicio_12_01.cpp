#include <iostream>
using namespace std;
int main ()
{
    int numero;
    do
    {
        cout << "Ingrese un numero del 1 al 5 " << endl;
        cin >> numero;
    } while ((numero <  1) ||  (numero  > 5));
    
    
    return 0;
}
