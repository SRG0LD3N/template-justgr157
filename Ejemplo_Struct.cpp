#include <iostream>
#include <string.h>
using namespace std;

typedef struct 
{
    string code;
    int year;
    int number;
} Carne;

typedef struct 
{
    string name;
    string email;
    Carne carne;
} Student;


int main()
{
    int total;
    cout << "Cuantos estudiantes desea ingresar?: ";
    cin >> total;
    cin.ignore();
    Student students[total];
    cout << "Welcome to my Class - UMG Struct Class \n";
    cout << "========================================= \n";
    for (int i = 0; i < total; i++)
    {
        cout << "Ingrese los datos del alumno no. " << i + 1 << endl;
        Student student;
        cout << "Escribe tu nombre: ";
        getline(cin, student.name);
        cout << "Escribe tu correo: ";
        getline(cin, student.email);
        cout << "Escribe el codigo de carrera: ";
        getline(cin, student.carne.code);
        cout << "Escribe el anio de carrera: ";
        cin >> student.carne.year;
        cin.ignore();
        cout << "Escribe numero de estudiante: ";
        cin >> student.carne.number;
        cin.ignore();
        students[i] = student;
        
		cout << " INGRESE LAS NOTAS \n";
		cout << "====================== \n";
        cout << "Parcial 1: ";
        cin >> student.nota.parcial1;
        cout << "Parcial 2: ";
        cin >> student.nota.parcial2;
        cout << "Actividades: ";
        cin >> student.nota.actividades;
        cout << "Final: ";
        cin >> student.nota.finales;

    
    }
    cout << "Los datos son los siguientes:\n";
    for (int i = 0; i < total; i++)
    {
        cout << "Alumno no. " << i + 1 << endl;
        Student student = students[i];
        cout << "Nombre: " << student.name << endl;
        cout << "Correo: " << student.email << endl;
        cout << "Carne: " << student.carne.code << "-" << student.carne.year << "-" << student.carne.number << endl;
    }
    return 0;
}
