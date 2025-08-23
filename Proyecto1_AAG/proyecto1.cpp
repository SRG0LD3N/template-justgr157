#include <iostream>
using namespace std;

int main() {
    int opcion;
    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Factorial de un numero\n";
        cout << "2. Determinar subsidio de familia\n";
        cout << "3. Salir\n";
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            int n, fact = 1;
            cout << "Ingrese un numero: ";
            cin >> n;
            for (int i = 1; i <= n; i++) {
                fact *= i;
            }
            cout << "El factorial es: " << fact << endl;
        }
        else if (opcion == 2) {
            int hijos;
            double subsidio = 0, extra = 0;
            cout << "Ingrese cantidad de hijos: ";
            cin >> hijos;

            if (hijos == 3) subsidio = 300;
            else if (hijos >= 4 && hijos <= 5) subsidio = 350;
            else if (hijos > 5) subsidio = 400;

            for (int i = 1; i <= hijos; i++) {
                int edad;
                cout << "Edad del hijo " << i << ": ";
                cin >> edad;
                if (edad >= 7 && edad <= 18) {
                    extra += subsidio * 0.06;
                }
            }
            cout << "La familia recibe: Q." << (subsidio + extra) << endl;
        }
        else if (opcion == 3) {
            cout << "Saliendo...\n";
        }
        else {
            cout << "Opcion invalida\n";
        }
    } while (opcion != 3);
    return 0;
}
