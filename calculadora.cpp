#include <iostream>
using namespace std;

int main() {
    char operacion;
    double num1, num2, resultado;

    cout << "Seleccione una operacion (+, -, *, /): ";
    cin >> operacion;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    switch (operacion) {
        case '+':
            resultado = num1 + num2;
            cout << "Resultado: " << resultado << endl;
            break;
        case '-':
            resultado = num1 - num2;
            cout << "Resultado: " << resultado << endl;
            break;
        case '*':
            resultado = num1 * num2;
            cout << "Resultado: " << resultado << endl;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                cout << "Resultado: " << resultado << endl;
            } else {
                cout << "Error: division por cero no permitida." << endl;
            }
            break;
        default:
            cout << "Operacion no valida." << endl;
    }

    return 0;
}

