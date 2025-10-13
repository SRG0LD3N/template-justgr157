//Solicitar al usuario una oración y remplace las consonantes con simbolo que el usuario desee, max 100 carcteres

#include <iostream>
#include <string.h>
using namespace std;

bool esConsonante(char c) {
    c = tolower(c);
    return (c >= 'a' && c <= 'z') && !(c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
}

int main() {
    char oracion[100];
    char simbolo;

    cout << "Escribe una oracion: ";
    cin.getline(oracion, 100);

    cout << "Escribe el simbolo que quiere remplazar: ";
    cin >> simbolo;

    for (int i = 0; i < strlen(oracion); i++) {
        if (esConsonante(oracion[i])) {
            oracion[i] = simbolo;
        }
    }

    cout << "Reemplazado: " << oracion << endl;

    return 0;
}

