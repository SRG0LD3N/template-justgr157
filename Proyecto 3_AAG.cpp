#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

struct Producto {
    string nombre;
    string codigo;
    float precio;
    string proveedor;
    int existencia;
    char estado;
    float descuento;
};

void cargar(vector<Producto>& lista);
void guardar(const vector<Producto>& lista);
void menu();
void agregar(vector<Producto>& lista);
void buscar(const vector<Producto>& lista);
void modificar(vector<Producto>& lista);
bool existeCodigo(const vector<Producto>& lista, string codigo);
bool contiene(string texto, string sub);

int main() {
    vector<Producto> productos;
    int opcion;
    cargar(productos);

    do {
        menu();
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore();

        switch (opcion) {
            case 1: agregar(productos); break;
            case 2: buscar(productos); break;
            case 3: modificar(productos); break;
            case 4: guardar(productos); cout << "Saliendo...\n"; break;
            default: cout << "Opcion invalida.\n"; break;
        }
        cout << endl;
    } while (opcion != 4);

    return 0;
}

void menu() {
    cout << " MENU DE PRODUCTOS \n";
    cout << "=========================\n";
    cout << "1) Agregar producto\n";
    cout << "2) Buscar producto\n";
    cout << "3) Modificar producto\n";
    cout << "4) Guardar y salir\n";
}

void cargar(vector<Producto>& lista) {
    ifstream archivo("productos.txt");
    if (!archivo.is_open()) {
        cout << "Archivo no encontrado, se creara uno nuevo al guardar.\n";
        return;
    }
    Producto p;
    while (archivo >> p.codigo >> p.nombre >> p.precio >> p.proveedor >> p.existencia >> p.estado >> p.descuento) {
        lista.push_back(p);
    }
    archivo.close();
    cout << "Se cargaron " << lista.size() << " productos.\n";
}

void guardar(const vector<Producto>& lista) {
    ofstream archivo("productos.txt");
    for (int i = 0; i < lista.size(); i++) {
        archivo << "Codigo: " << lista[i].codigo
                << " | Nombre: " << lista[i].nombre
                << " | Precio: Q" << lista[i].precio
                << " | Proveedor: " << lista[i].proveedor
                << " | Existencia: " << lista[i].existencia
                << " | Estado: " << lista[i].estado
                << " | Descuento: " << lista[i].descuento << "%" << endl;
    }
    archivo.close();

    cout << "Se guardardon los productos correctamente.\n";
}

bool existeCodigo(const vector<Producto>& lista, string codigo) {
    for (int i = 0; i < lista.size(); i++) {
        if (lista[i].codigo == codigo) return true;
    }
    return false;
}

bool contiene(string texto, string sub) {

    for (int i = 0; i < texto.size(); i++) texto[i] = tolower(texto[i]);
    for (int i = 0; i < sub.size(); i++) sub[i] = tolower(sub[i]);
    return texto.find(sub) != string::npos;
}

void agregar(vector<Producto>& lista) {
    Producto p;
    cout << "AGREGAR PRODUCTO\n";
    cout << "=========================\n";

    do {
        cout << "Codigo: ";
        getline(cin, p.codigo);
        if (existeCodigo(lista, p.codigo)) {
            cout << "El codigo ya existe...\n";
            p.codigo = "";
        }
    } while (p.codigo == "");

    cout << "Nombre: ";
    getline(cin, p.nombre);
    cout << "Precio: ";
    cin >> p.precio;
    cin.ignore();
    cout << "Proveedor: ";
    getline(cin, p.proveedor);
    cout << "Existencia: ";
    cin >> p.existencia;
    cin.ignore();
    cout << "Estado (A/N): ";
    cin >> p.estado;
    cout << "Descuento: ";
    cin >> p.descuento;
    cin.ignore();
    
    float precioFinal = p.precio - (p.precio * p.descuento / 100);
    
    cout << "\nNombre: " << p.nombre
     << " | Precio original: Q" << p.precio
     << " | Precio final: Q" << precioFinal << endl;

    lista.push_back(p);
    cout << "Producto añadido exitosamente\n";
}

void buscar(const vector<Producto>& lista) {
    int opcion;
    cout << "BUSCAR PRODUCTO\n";
    cout << "========================\n";
    cout << "1. Por codigo\n";
    cout << "2. Por nombre\n";
    cout << "Selecciona una opcion: ";
    cin >> opcion;
    cin.ignore();

    if (opcion == 1) {
        string codigo;
        cout << "Codigo: ";
        getline(cin, codigo);
        bool encontrado = false;
        for (int i = 0; i < lista.size(); i++) {
            if (lista[i].codigo == codigo) {
                cout << "Nombre: " << lista[i].nombre << " | Precio: " << lista[i].precio << endl;
                encontrado = true;
            }
        }
        if (!encontrado) cout << "No se pudo encontrar...\n";
    } else if (opcion == 2) {
        string palabra;
        cout << "Palabra: ";
        getline(cin, palabra);
        bool any = false;
        for (int i = 0; i < lista.size(); i++) {
            if (contiene(lista[i].nombre, palabra)) {
                cout << "Codigo: "<< lista[i].codigo << " | Nombre: " << lista[i].nombre << endl;
                any = true;
            }
        }
        if (!any) cout << "Sin coincidencias\n";
    }
}

void modificar(vector<Producto>& lista) {
    string codigo;
    cout << "MODIFICAR PRODUCTO\n";
    cout << "==========================\n";
    cout << "Codigo del producto: ";
    getline(cin, codigo);

    int pos = -1;
    for (int i = 0; i < lista.size(); i++) {
        if (lista[i].codigo == codigo) pos = i;
    }

    if (pos == -1) {
        cout << "No se pudo encontrar...\n";
        return;
    }

    Producto &p = lista[pos];
    cout << "Modificar datos\n";
    string nuevo;

    cout << "Nombre actual: " << p.nombre << " > ";
    getline(cin, nuevo);
    if (nuevo != "") p.nombre = nuevo;

    cout << "Proveedor actual: " << p.proveedor << " > ";
    getline(cin, nuevo);
    if (nuevo != "") p.proveedor = nuevo;

    cout << "Precio actual: Q." << p.precio << " > ";
    getline(cin, nuevo);
    if (nuevo != "") p.precio = stof(nuevo);

    cout << "Existencia actual: " << p.existencia << " > ";
    getline(cin, nuevo);
    if (nuevo != "") p.existencia = stoi(nuevo);

    cout << "Estado actual: " << p.estado << " > ";
    getline(cin, nuevo);
    if (nuevo != "") p.estado = nuevo[0];

    cout << "Descuento actual: " << p.descuento << " > ";
    getline(cin, nuevo);
    if (nuevo != "") p.descuento = stof(nuevo);

    cout << "Producto actualizado con exito\n";
}

