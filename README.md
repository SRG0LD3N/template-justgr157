# Estructuras de Selección

Documento de información para aprender que es una estructura de selección simple (`if - else`) y la estructura de selección múltiple (`switch`)

## Estructura `if - else`

Se usa cuando se desea ejecutar un bloque de código si una condición se cumple, y otro bloque si no se cumple.

### Ejemplo 1

```cpp
#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingresa un número: ";
    cin >> numero;

    if (numero > 0) {
        cout << "El número es positivo." << endl;
    } else if (numero == 0) {
        cout << "El número es cero." << endl;
    } else {
        cout << "El número es negativo." << endl;
    }

    return 0;
}
```

## Estructura Switch

La estructura `switch` permite ejecutar diferentes bloques de código según el valor de una variable, generalmente de tipo entero o carácter.

### Ejemplo 2

```cpp
#include <iostream>
using namespace std;

int main() {
    int dia;
    cout << "Ingresa un número del 1 al 5: ";
    cin >> dia;

    switch (dia) {
        case 1:
            cout << "Lunes" << endl;
            break;
        case 2:
            cout << "Martes" << endl;
            break;
        case 3:
            cout << "Miércoles" << endl;
            break;
        case 4:
            cout << "Jueves" << endl;
            break;
        case 5:
            cout << "Viernes" << endl;
            break;
        default:
            cout << "Número fuera de rango (1-5)." << endl;
            break;
    }

    return 0;
}
```
