// Materia: Programación I, Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Fecha creación: 11/11/2025
// Número de ejercicio: 5
#include <bits/stdc++.h>
using namespace std;

void EscribirProductos() {
    ofstream archivo;
    string producto;
    float precio;
    int nProductos;

    archivo.open("productos.txt", ios::out);

    if (archivo.fail()) {
        cout << "No se pudo abrir el archivo para escribir.";
        exit(1);
    }

    cout << "Ingresa el numero de productos: ";
    cin >> nProductos;
    
    for (int i = 0; i < nProductos; i++) {
        cout << "Ingrese el producto " << i+1 << " : ";
        cin >> producto;
        cout << "Ingrese el precio: ";
        cin >> precio;
        archivo << producto << " " << precio << endl;
    }
    archivo.close();
}

void MostrarProductos() {
    ifstream archivo("productos.txt");
    string producto;
    float precio;

    if (archivo.fail()) {
        cout << "No se pudo abrir el archivo para leer";
        exit(1);
    }
    
    cout << "\nLista de productos:" << endl;
    while (archivo >> producto >> precio) {
        cout << producto << " - $" << precio << endl;
    }
    archivo.close();
}

void ActualizarPrecio() {
    ifstream archivo("productos.txt");
    ofstream temp("temp.txt");
    string producto, productoBuscar;
    float precio, nuevoPrecio;
    bool encontrado = false;

    if (archivo.fail() || temp.fail()) {
        cout << "No se pudo abrir el archivo";
        exit(1);
    }

    cout << "\nIngrese el producto a actualizar: ";
    cin >> productoBuscar;
    cout << "Ingrese el nuevo precio: ";
    cin >> nuevoPrecio;

    // Leer y actualizar
    while (archivo >> producto >> precio) {
        if (producto == productoBuscar) {
            temp << producto << " " << nuevoPrecio << endl;
            encontrado = true;
            cout << "Precio actualizado!" << endl;
        } else {
            temp << producto << " " << precio << endl;
        }
    }

    archivo.close();
    temp.close();

    // Reemplazar archivo original
    remove("productos.txt");
    rename("temp.txt", "productos.txt");

    if (!encontrado) {
        cout << "Producto no encontrado!" << endl;
    }
}

int main() {
    int opcion;
    
    do {
        cout << "\n=== MENU PRODUCTOS ===" << endl;
        cout << "1. Agregar productos" << endl;
        cout << "2. Mostrar productos" << endl;
        cout << "3. Actualizar precio" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                EscribirProductos();
                break;
            case 2:
                MostrarProductos();
                break;
            case 3:
                ActualizarPrecio();
                break;
            case 4:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opcion invalida!" << endl;
        }
    } while (opcion != 4);

    return 0;
}
