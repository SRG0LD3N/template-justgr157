#include <iostream>
using namespace std;

int main() {
    bool out = true;
    int option;
    int number;
    char character;

    do {
        cout << "Bienvenido... \n";
        cout << "1 ... Cuadrado \n";
        cout << "2 ... Equis \n";
        cin >> option;

        cout << "Ingrese la cantidad: ";
        cin >> number;

        cout << "Ingrese el caracter: ";
        cin >> character;

        switch (option) {
            case 1:
                for (int i = 0; i < number; i++) {
                    for (int j = 0; j < number; j++) {
                        if (i == 0 || i == number - 1 || j == 0 || j == number - 1) {
                            cout << character << " ";
                        } else {
                            cout << "  ";
                        }
                    }
                    cout << endl;
                }
                break;

            case 2:
                for (int i = 0; i < number; i++) {
                    for (int j = 0; j < number; j++) {
                        if (i == j || i + j == number - 1) {
                            cout << character << " ";
                        } else {
                            cout << "  ";
                        }
                    }
                    cout << endl;
                }
                break;

            default:
                cout << "Algo no estuvo bien" << endl;
                break;
        }

        cout << "Desea intentarlo de nuevo, presione 1 si no presione 0: ";
        int repeat;
        cin >> repeat;
        out = (repeat == 1);

    } while (out);

    return 0;
}
