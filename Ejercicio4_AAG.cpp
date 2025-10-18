#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

const float MAX_NOTA_TOTAL = 100 ;

struct Alumno {
    string nombre;
    string apellido;
    string carne;
    float notaTotal;
};

void menu();
void agregarAlumno(vector<Alumno>& lista);
void mostrarAlumnos(const vector<Alumno>& lista);
void encontrarMejorAlumno(const vector<Alumno>& lista);
float obtenerNotaValidada(float maxPuntos);
void mostrarFloat(float valor);

int main() {
    vector<Alumno> alumnos;
    int opcion;

    do {
        menu();
        cout << "Seleccione una opcion: ";
        if (!(cin >> opcion)) {
            cout << "Entrada incorrecta, ingrese un numero.\n";
            cin.clear();
            cin.ignore(256, '\n');
            opcion = 0;
            continue;
        }
        cin.ignore(256, '\n');

        switch (opcion) {
            case 1:
                agregarAlumno(alumnos);
                break;
            case 2:
                mostrarAlumnos(alumnos);
                break;
            case 3:
                encontrarMejorAlumno(alumnos);
                break;
            case 4:
                cout << "Saliendo del programa.\n";
                break;
            default:
                cout << "Opcion invalida, intente de nuevo.\n";
                break;
        }
        cout << "\n----------------------------------------\n";
    } while (opcion != 4);

    return 0;
}

void menu() {
    cout << "\n  REGISTRO DE ALUMNOS\n";
    cout << "==============================\n";
    cout << "1) Agregar nuevo alumno\n";
    cout << "2) Mostrar todos los alumnos\n";
    cout << "3) Mostrar alumno con mejor nota\n";
    cout << "4) Salir\n";
    cout << "==============================\n";
}

void mostrarFloat(float valor) {
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(2);
    cout << valor;
}

float obtenerNotaValidada(float maxPuntos) {
    string input;
    float nota = -1.0f;
    bool entradaValida = false;
    
    do {
        cout << "Nota Total (Max ";
        mostrarFloat(maxPuntos);
        cout << " pts): ";
        getline(cin, input);

        stringstream ss(input);
        if (ss >> nota) {
            char c;
            if (ss >> c) {
                cout << "Entrada invalida, solo ingrese el valor numerico.\n";
                nota = -1.0f;
                continue;
            }
            
            if (nota >= 0.0f && nota <= maxPuntos) {
                entradaValida = true;
            } else {
                cout << "Nota invalida, debe estar entre 0.0 y ";
                mostrarFloat(maxPuntos);
                cout << ".\n";
            }
        } else {
            cout << "Entrada invalida, debe ser un valor numerico.\n";
        }
    } while (!entradaValida);
    
    return nota;
}

void agregarAlumno(vector<Alumno>& lista) {
    Alumno nuevo;
    
    cout << "AGREGAR ALUMNO\n";
    cout << "==========================\n";

    do {
        cout << "Carne (No debe estar vacio): ";
        getline(cin, nuevo.carne);
        if (nuevo.carne.empty()) {
            cout << "El carne no puede estar vacio.\n";
        } else {
            break;
        }
    } while (true);
    
    cout << "Nombre: ";
    getline(cin, nuevo.nombre);
    cout << "Apellido: ";
    getline(cin, nuevo.apellido);

    nuevo.notaTotal = obtenerNotaValidada(MAX_NOTA_TOTAL);

    lista.push_back(nuevo);
    cout << "\nAlumno '" << nuevo.nombre << " " << nuevo.apellido << "' agregado con nota total de ";
    mostrarFloat(nuevo.notaTotal);
    cout << ".\n";
}

void mostrarAlumnos(const vector<Alumno>& lista) {
    if (lista.empty()) {
        cout << "No hay alumnos registrados.\n";
        return;
    }

    cout << "LISTADO DE ALUMNOS (" << lista.size() << ")\n";
    cout << "==========================================================\n";
    cout << "CARNE      | NOMBRE COMPLETO               | NOTA TOTAL\n";
    cout << "----------------------------------------------------------\n";
    
    for (const auto& alumno : lista) {
        cout << alumno.carne;
        for (int i = alumno.carne.length(); i < 10; ++i) cout << " ";
        cout << " | ";
        
        string nombreCompleto = alumno.nombre + " " + alumno.apellido;
        cout << nombreCompleto;
        for (int i = nombreCompleto.length(); i < 30; ++i) cout << " ";
        cout << " | ";
        
        mostrarFloat(alumno.notaTotal);
        cout << "\n";
    }
    cout << "==========================================================\n";
}

void encontrarMejorAlumno(const vector<Alumno>& lista) {
    if (lista.empty()) {
        cout << "No hay alumnos para evaluar.\n";
        return;
    }

    const Alumno* mejorAlumno = &lista[0];
    
    for (size_t i = 1; i < lista.size(); ++i) {
        if (lista[i].notaTotal > mejorAlumno->notaTotal) {
            mejorAlumno = &lista[i];
        }
    }

    cout << "ALUMNO CON LA MAYOR CALIFICACION TOTAL\n";
    cout << "======================================\n";
    cout << "Nombre Completo: " << mejorAlumno->nombre << " " << mejorAlumno->apellido << endl;
    cout << "Carne: " << mejorAlumno->carne << endl;
    cout << "Nota Total: ";
    mostrarFloat(mejorAlumno->notaTotal);
    cout << " / ";
    mostrarFloat(MAX_NOTA_TOTAL);
    cout << "\n";
    cout << "======================================\n";
}
