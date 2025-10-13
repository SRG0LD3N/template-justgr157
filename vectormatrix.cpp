#include <iostream>
using namespace std;

int main()
{
    int rows, columns;
    cout << "Cuantos filas desea?: ";
    cin >> rows;
    cout << "Cuantos columnas desea?: ";
    cin >> columns;

    int matrix[rows][columns];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << "Ingrese numero[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix[i][j];
        }
    }

    cout << "\nLos datos del matriz son:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
