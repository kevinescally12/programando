///Deducir si es par o impar
#include <iostream>

using namespace std;

int numero;

int main() {

    cout << "Ingrese un número entero: ";

    cin >> numero;

    if (numero % 2 == 0) {

        cout << " El numero "<< numero <<" es par.\n";

    } else {

        cout << " El numero "<< numero << " es impar.\n";

    }

    return 0;

}