#include <iostream>
#include <string>
#include <iomanip> // Para setprecision

using namespace std;

int main() {
    string usuario;
    float precio;
    int cantidad;

    cout << "Ingrese el nombre del usuario: ";
    getline(cin, usuario);

    cout << "Ingrese el precio unitario: ";
    cin >> precio;

    cout << "Ingrese la cantidad: ";
    cin >> cantidad;

    float total = precio * cantidad;

    cout << fixed << setprecision(2);
    cout << "\n--- Factura ---" << endl;
    cout << "Usuario: " << usuario << endl;
    cout << "Precio unitario: Q" << precio << endl;
    cout << "Cantidad: " << cantidad << endl;
    cout << "Total a pagar: Q" << total << endl;

    return 0;
}

