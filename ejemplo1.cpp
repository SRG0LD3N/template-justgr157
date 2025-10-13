#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Ingrese un numero: ";
    cin >> number;
    if (number % 2 == 0) {
        cout << "El numero " << number << " es par\n";
    } else {
        cout << "El numero " << number << " no es par\n";
    }
    return 0;
}

