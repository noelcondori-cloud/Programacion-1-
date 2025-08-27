#include <iostream>
using namespace std;

int main()
{
    int nota;
    cout << "Ingrese la nota del estudiante" << endl;
    cin >> nota;
    if(nota >= 51){
        if(nota < 60){
            cout << "Tiene la calificacion de C" << endl;
        } else if (nota < 70) {
            cout << "Tiene la calificacion de C+" << endl;
        } else if (nota < 80) {
            cout << "Tiene la calificacion de B" << endl;
        } else if (nota < 90) {
            cout << "Tiene la calificacion de B+" << endl;
        } else if (nota < 95) {
            cout << "Tiene la calificacion de A" << endl;
        } else if (nota <= 100){
            cout << "Tiene la calificacion de A+" << endl;
        }
    } else {
        cout << "El estudiante ha reprobado" << endl;
    }

    return 0;
}
