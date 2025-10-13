#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <limits>
using namespace std;

struct Producto {
    int id;
    string nombre, marca;
    int stock;
    double precio;
};

vector<Producto> inventario;
int contadorID = 1;

void limpiarBuffer() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void agregarProducto() {
    Producto p;
    p.id = contadorID++;
    limpiarBuffer();
    cout << "\nNombre: "; getline(cin, p.nombre);
    cout << "Marca: "; getline(cin, p.marca);
    cout << "Stock: "; cin >> p.stock;
    cout << "Precio (Q): "; cin >> p.precio;
    inventario.push_back(p);
    cout << "Producto agregado.\n";
}

void listarInventario() {
    if (inventario.empty()) {
        cout << "Inventario vacio.\n";
        return;
    }
    cout << "\n================ INVENTARIO ================\n";
    cout << left << setw(5) << "ID" << setw(20) << "Nombre" << setw(15) << "Marca"
         << setw(10) << "Stock" << setw(12) << "Precio (Q)" << "\n";

    for (size_t i = 0; i < inventario.size(); ++i) {
        Producto p = inventario[i];
        cout << left << setw(5) << p.id
             << setw(20) << p.nombre
             << setw(15) << p.marca
             << setw(10) << p.stock
             << "Q" << fixed << setprecision(2) << p.precio << "\n";
    }
}

void buscarProducto() {
    string busqueda;
    limpiarBuffer();
    cout << "\nBuscar nombre: "; getline(cin, busqueda);
    bool ok = false;

    for (size_t i = 0; i < inventario.size(); ++i) {
        Producto p = inventario[i];
        if (p.nombre.find(busqueda) != string::npos) {
            cout << "\nEncontrado: ID " << p.id
                 << " - " << p.nombre
                 << ", Marca: " << p.marca
                 << ", Stock: " << p.stock
                 << ", Precio: Q" << fixed << setprecision(2) << p.precio << "\n";
            ok = true;
        }
    }
    if (!ok) cout << "\nProducto no encontrado.\n";
}

int main() {
    int op;
    do {
        cout << "\n============= MENU PRINCIPAL =============\n";
        cout << "1. Agregar\n";
        cout << "2. Listar\n";
        cout << "3. Buscar\n";
        cout << "4. Salir\n";
        cout << "==========================================\n";
        cout << "Opcion: ";
        cin >> op;
        switch (op) {
            case 1: agregarProducto(); break;
            case 2: listarInventario(); break;
            case 3: buscarProducto(); break;
            case 4: cout << "Saliendo del sistema...\n"; break;
            default: cout << "Opcion invalida.\n";
        }
    } while (op != 4);
    return 0;
}
