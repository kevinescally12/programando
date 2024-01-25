#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> numeros;
    for (int p = 0; p < 10; ++p)
    {
        int numero;
        cout << "Ingrese el numero " << p + 1 << ":\n ";
        cin >> numero;
        numeros.push_back(numero);
    }
    int suma = 0;
    for (int numless : numeros)
    {
        suma += numless;
    }
    double promedio = static_cast<double>(suma) / numeros.size();
    int mayorqp = 0;
    for (int numless : numeros)
    {
        if (numless > promedio)
        {
            mayorqp++;
        }
    }
    cout << "El promedio de los numeros es: " << promedio << endl;
    cout << "Los numeros mayores al promedio son: " << mayorqp << endl;
    return 0;
}
