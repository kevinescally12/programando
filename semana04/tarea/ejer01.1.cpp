#include <iostream>
using namespace std;
int main() {
    int suma = 0, mayorqp = 0, numero, contador;
    double promedio;
    cout << "Ingrese 10 numeros enteros:\n";
    for (contador = 0; contador < 10; ++contador) {
        cout << "Ingresa el numero " << contador + 1 << ":\n ";
        cin >> numero;
        suma += numero;
        promedio = static_cast<double>(suma) / 10;
    }
    for(int num = numero)
        if (num > promedio) {
            mayorqp++;
        }
    }
    cout << "La suma de los numeros es " << suma << endl;
    cout << "El promedio de los 10 numeros es " << promedio << endl;
    cout << "La cantidad de numeros mayores que el promedio es: " << mayorqp << endl;
    return 0;
}
