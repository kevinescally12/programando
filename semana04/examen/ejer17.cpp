#include <iostream>
using namespace std;
int main() {
    int numero, suma = 0;
    bool prim = false;
    do {
        if (!prim) {
            cout << "(Para terminar la suma ingrese un numero negativo) " << endl;
            prim = true;
        }
        cout << "Ingrese un numero: "<<endl;
        cin >> numero;
        if (numero >= 0) {
            suma += numero;
        }
    } while (numero >= 0);
    cout << "La suma de los numeros es " << suma << endl;
    return 0;
}
