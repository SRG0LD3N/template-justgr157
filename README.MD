# Proyecto #1

Proyecto realizado incluyendo **Pseudocódigo, C++ y Python**.  
El usuario puede elegir entre calcular el **factorial de un número** o **determinar el subsidio que recibe una familia** según las condiciones solicitadas. 
Primero vamos a tener un **menú interactivo** y solo termina cuando la persona selecciona la opción 3: **Salir**.

---

## ESPECIFICACIONES

1. **Factorial de un número entero positivo**  
   - Uso de estructuras repetitivas.  
   - No se permite el uso de funciones ni recursividad.  

2. **Determinación de subsidio familiar**  
   - Monto base:  
     - 3 hijos → Q. 300.00  
     - 4 a 5 hijos → Q. 350.00  
     - Más de 5 hijos → Q. 400.00  
   - Bonificación adicional:  
     - Por cada hijo entre **7 y 18 años**, se agrega el **6% del subsidio base**.  

3. **Menú principal del programa**

- Inicio
- Repetir
- Mostrar "1. Factorial de un número"
- Mostrar "2. Determinar subsidio de familia"
- Mostrar "3. Salir"
- Leer opcion


## IMPLEMENTACIÓN
- [Pseudocódigo](https://github.com/SRG0LD3N/template-justgr157/blob/main/Proyecto1_AAG/pseudocodigo.txt)
- [Código C++](https://github.com/SRG0LD3N/template-justgr157/blob/main/Proyecto1_AAG/proyecto1.cpp)
- [Código Python](https://github.com/SRG0LD3N/template-justgr157/blob/main/Proyecto1_AAG/proyecto1.py)
- [Readme.md](https://github.com/SRG0LD3N/template-justgr157/blob/main/Proyecto1_AAG/README.MD)


### PSEUDOCÓDIGO

Representación estructurada y en lenguaje natural de los algoritmos desarrollados.

--------------------------
```
Inicio
Repetir
Mostrar "1. Factorial de un número"
Mostrar "2. Determinar subsidio de familia"
Mostrar "3. Salir"
Leer opcion

Segun opcion Hacer
  Caso 1:
    Leer numero
    factorial = 1
    Para i = 1 Hasta numero Hacer
      factorial = factorial * i
    FinPara
    Mostrar "El factorial es: ", factorial

  Caso 2:
    Leer hijos
    Si hijos = 3 Entonces
      subsidio = 300
    Sino Si hijos >= 4 Y hijos <= 5 Entonces
      subsidio = 350
    Sino Si hijos > 5 Entonces
      subsidio = 400
    FinSi

    extra = 0
    Para i = 1 Hasta hijos Hacer
      Leer edad
      Si edad >= 7 Y edad <= 18 Entonces
        extra = extra + (subsidio * 0.06)
      FinSi
    FinPara

    total = subsidio + extra
    Mostrar "La familia recibe: ", total

  Caso 3:
    Mostrar "Saliendo del programa..."

  De Otro Modo:
    Mostrar "Opción inválida"
FinSegun
```

---

### CÓDIGO EN C++

```cpp
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
```
CÓDIGO EN PYTHON

```cpp
while True:
    print("\n--- MENU ---")
    print("1. Factorial de un numero")
    print("2. Determinar subsidio de familia")
    print("3. Salir")
    opcion = int(input("Ingrese una opcion: "))

    if opcion == 1:
        n = int(input("Ingrese un numero: "))
        fact = 1
        for i in range(1, n + 1):
            fact *= i
        print("El factorial es:", fact)

    elif opcion == 2:
        hijos = int(input("Ingrese cantidad de hijos: "))
        if hijos == 3:
            subsidio = 300
        elif 4 <= hijos <= 5:
            subsidio = 350
        elif hijos > 5:
            subsidio = 400
        else:
            subsidio = 0

        extra = 0
        for i in range(hijos):
            edad = int(input(f"Edad del hijo {i+1}: "))
            if 7 <= edad <= 18:
                extra += subsidio * 0.06

        print("La familia recibe: Q.", subsidio + extra)

    elif opcion == 3:
        print("Saliendo...")
        break
    else:
        print("Opcion invalida")
```
