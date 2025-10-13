#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int n, adj;

    cout << "Ingrese el numero n: ";
    cin >> n;

    system("cls");

    cout << "Ingrese el numero adj: ";
    cin >> adj;

    while (n != adj) {
        cout << "Adivina ";
        cin >> adj;
    }

    cout << "Numero correcto!" << endl;

    return 0;
}

