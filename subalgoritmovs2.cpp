#include <iostream>
#include <string> 
using namespace std;

string VOWELS = "aeiou";
string CONSONANTS = "bcdfghjklmnpqrstvwxyz";
string SYMBOLS = "!@#$%^&*()_+=-][{};':<>,./?|"; 
int add(int, int);
int multiply(int, int);
void procedureAddition(int, int);
string inverse(string);
int countVowels(string);
int countConsonants(string);
int countSymbols(string);

int main() {
    int value, value2;
    cout << "Ingrese el primer valor: ";
    cin >> value;
    cout << "Ingrese el segundo valor: ";
    cin >> value2;
    cout << "La suma entre " << value << " y " << value2 << " es: ";
    cout << add(value, value2);
    int result = multiply(value, value2);
    cout << "\nLa multiplicacion entre " << value << " y " << value2 << " es: " << result;
    cout << endl;
    procedureAddition(value, value2);
    cout << endl;
    string text;
    cout << "Escriba una oracion: ";
    cin.ignore();
    getline(cin, text);
    
    cout << "Total Vocales: " << countVowels(text) << endl;
    cout << "Total Consonantes: " << countConsonants(text) << endl;
    cout << "Total simbolos: " << countSymbols(text) << endl;
    return 0;
}

int add(int numberOne, int numberTwo) {
    int result = numberOne + numberTwo;
    return result;
}

int multiply(int numberOne, int numberTwo) {
    return numberOne * numberTwo;
}

void procedureAddition(int numberOne, int numberTwo) {
    int result = numberOne + numberTwo;
    cout << "Suma: " << result;
}

string inverse(string text) {
    string tmp = "";
    for (int i = text.length() - 1; i >= 0; i--)
    {
        tmp += text[i]; 
    }
    return tmp;
}

int countVowels(string text) {
    int count = 0; 
    for (int i = 0; i < text.length(); i++)
    {
        for (int j = 0; j < VOWELS.length(); j++)
        {
            if (text[i] == VOWELS[j]) {
                count++;
                cout << text[i];
                break;
            }
        }
    }
    cout << endl;
    return count;
}

int countConsonants(string text) {
    int count = 0; 
    for (int i = 0; i < text.length(); i++)
    {
        for (int j = 0; j < CONSONANTS.length(); j++)
        {
            if (text[i] == CONSONANTS[j]) {
                count++;
                cout << text[i];
                break;
            }
        }
    }
    cout << endl;
    return count;
}

int countSymbols(string text) {
    int count = 0; 
    for (int i = 0; i < text.length(); i++)
    {
        for (int j = 0; j < SYMBOLS.length(); j++)
        {
            if (text[i] == SYMBOLS[j]) {
                count++;
                cout << text[i];
                break;
            }
        }
    }
    cout << endl;
    return count;
}
