// Materia: Programación I, Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Fecha creación: 04/11/2025
// Número de ejercicio: 9
#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Ingrese el numero de alumnos: ";
    cin >> N;

    char nombres[100][50];  // nombres de los alumnos, máximo 100
    float T1[100], T2[100], T3[100], T4[100], EF[100], NF[100];

    // Registro de notas
    for (int i = 0; i < N; i++) {
        cin.ignore(); // limpiar buffer
        cout << "\nAlumno " << i + 1 << "\n";

        cout << "Nombre: ";
        cin.getline(nombres[i], 50);

        cout << "Nota T1: ";
        cin >> T1[i];
        cout << "Nota T2: ";
        cin >> T2[i];
        cout << "Nota T3: ";
        cin >> T3[i];
        cout << "Nota T4: ";
        cin >> T4[i];
        cout << "Nota EF: ";
        cin >> EF[i];

        // Calcular nota de presentación NP
        float NP = (T1[i] + T2[i] + T3[i] + T4[i]) / 4.0;

        // Calcular nota final NF
        NF[i] = 0.7 * NP + 0.3 * EF[i];
    }

    // Inicializar promedio, min y max
    float suma = 0;
    float minNF = NF[0];
    float maxNF = NF[0];

    // Calcular promedio, min y max
    for (int i = 0; i < N; i++) {
        suma += NF[i];
        if (NF[i] < minNF) minNF = NF[i];
        if (NF[i] > maxNF) maxNF = NF[i];
    }
    float promedio = suma / N;

    // Mostrar resultados
    cout << "\n===== NOTAS FINALES =====\n";
    for (int i = 0; i < N; i++) {
        cout << nombres[i] << " --> Nota Final: " << NF[i] << endl;
    }

    cout << "\nPromedio del curso: " << promedio << endl;
    cout << "Nota minima: " << minNF << endl;
    cout << "Nota maxima: " << maxNF << endl;

    return 0;
}
