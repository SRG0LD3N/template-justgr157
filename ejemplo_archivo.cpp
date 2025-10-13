#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
int main() {
	fstream file ("oración.txt");
	string line;
	if (!file.is_open()) {
		cout << "No se encontro o no se pudo abrir el archivo";
		return 0;
	}
	getline(file, line);
	file.close();
	cout << "la primera linea del archivo es: " << line << endl;
	cout << "La oracion tiene una longitud de " << line.length() << endl;
	return 0;
}
