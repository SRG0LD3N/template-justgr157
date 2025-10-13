#include <iostream>
#include <cstdlib> 
#include <cmath>

using namespace std;

int main() {
    int n, adj;

    cout << "Ingrese el numero objetivo (n): ";
    cin >> n;

    system("cls");

    cout << "Sigue adivinando";
    cin >> adj;

    while (adj != n) {

        double margen = n * 0.05;
        double diferencia = fabs(adj - n);

        if (diferencia <= margen) {
            cout << "Caliente!" << endl;
        } else {
            cout << "Frio!" << endl;
        }

        cout << "Prueba de Nuevo ";
        cin >> adj;
    }

    cout << "Fallaste :D" << endl;
    return 0;
}

// Secret*¨5/100, luego de eso añadir 3 intentos, cada que el usuario 
