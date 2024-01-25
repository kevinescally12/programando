#include <iostream>
using namespace std;
int main()
{
    int contador = 0;
    int suma = 0;
    int numero;
    while (contador < 7)
    {
        cout << "enter the number " << contador + 1 << ":\n ";
        cin >> numero;
        suma += numero;
        contador++;
    }
    cout << "The sum of the numbers is " << suma << endl;

    return 0;
}