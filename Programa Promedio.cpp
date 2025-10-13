#include <iostream>
using namespace std;

int main() {
    float num1, num2, num3, promedio;

    cout << "Ingrese el primer numero (mayor a 0): ";
    cin >> num1;
    cout << "Ingrese el segundo numero (mayor a 0): ";
    cin >> num2;
    cout << "Ingrese el tercer numero (mayor a 0): ";
    cin >> num3;

    if (num1 > 0 && num2 > 0 && num3 > 0) {
        promedio = (num1 + num2 + num3) / 3;

        cout << "Numeros ingresados: " << num1 << ", " << num2 << ", " << num3 << endl;
        cout << "El promedio es: " << promedio << endl;
    } else {
        cout << "Todos los numeros deben ser mayores a cero." << endl;
    }

    system("pause");
    return 0;
}

