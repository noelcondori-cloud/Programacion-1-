// Materia: Programación I, Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Fecha creación: 04/11/2025
// Número de ejercicio: 7
#include <iostream>
using namespace std;

struct Producto {
    char nombre[50];
    char codigo[20];
    float precio;
    int cantidad_en_inventario;
    char observaciones[100];
};

int main() {
    int N;
    cout << "Cuantos productos deseas registrar? ";
    cin >> N;
    cin.ignore(); // limpiar buffer

    Producto productos[100]; // máximo 100 productos

    // Registro de productos
    for (int i = 0; i < N; i++) {
        cout << "\n=== Producto " << i + 1 << " ===\n";

        cout << "Nombre: ";
        cin.getline(productos[i].nombre, 50);

        cout << "Codigo: ";
        cin.getline(productos[i].codigo, 20);

        cout << "Precio: ";
        cin >> productos[i].precio;

        cout << "Cantidad en inventario: ";
        cin >> productos[i].cantidad_en_inventario;
        cin.ignore(); // limpiar buffer

        // Agregar advertencia si cantidad < 5
        if (productos[i].cantidad_en_inventario < 5) {
            char advertencia[] = "PRODUCTO CON BAJA CANTIDAD DE INVENTARIO";
            int j = 0;
            while (advertencia[j] != '\0') {
                productos[i].observaciones[j] = advertencia[j];
                j++;
            }
            productos[i].observaciones[j] = '\0';
        } else {
            char ninguna[] = "Ninguna";
            int j = 0;
            while (ninguna[j] != '\0') {
                productos[i].observaciones[j] = ninguna[j];
                j++;
            }
            productos[i].observaciones[j] = '\0';
        }
    }

    // Encontrar producto más caro
    int indice_mas_caro = 0;
    for (int i = 1; i < N; i++) {
        if (productos[i].precio > productos[indice_mas_caro].precio) {
            indice_mas_caro = i;
        }
    }

    // Calcular cantidad total en inventario
    int cantidad_total = 0;
    for (int i = 0; i < N; i++) {
        cantidad_total += productos[i].cantidad_en_inventario;
    }

    // Mostrar resultados
    cout << "\n=== Producto más caro ===\n";
    cout << "Nombre: " << productos[indice_mas_caro].nombre << endl;
    cout << "Codigo: " << productos[indice_mas_caro].codigo << endl;
    cout << "Precio: " << productos[indice_mas_caro].precio << endl;
    cout << "Cantidad: " << productos[indice_mas_caro].cantidad_en_inventario << endl;
    cout << "Observaciones: " << productos[indice_mas_caro].observaciones << endl;

    cout << "\nCantidad total de productos en inventario: " << cantidad_total << endl;

    // Mostrar inventario completo
    cout << "\n=== Inventario Completo ===\n";
    for (int i = 0; i < N; i++) {
        cout << "\nProducto " << i + 1 << endl;
        cout << "Nombre: " << productos[i].nombre << endl;
        cout << "Codigo: " << productos[i].codigo << endl;
        cout << "Precio: " << productos[i].precio << endl;
        cout << "Cantidad: " << productos[i].cantidad_en_inventario << endl;
        cout << "Observaciones: " << productos[i].observaciones << endl;
    }

    return 0;
}
