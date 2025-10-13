#include <iostream>
using namespace std;

int main()
{
    int vector[7];
    for (int i = 0; i < 7; i++)
    {
        cout << "Ingrese numero: ";
        cin >> vector[i];
    }

    cout << "\nLos datos del vector son:\n";
    for (int i = 0; i < 7; i++)
    {
        cout << vector[i] << " ";
    }

    return 0;
}

  
