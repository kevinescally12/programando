#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> numeros = {9, 7, 2, 33, 60, 57, 34,42, 16, 28};
    int mayor = numeros[0];
    for (size_t i = 1; i < numeros.size(); ++i) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
    }
    cout << "Numeros ";
    for (int numless : numeros) {
        cout << numless << " ";
    }
    cout << endl;
    cout << "El mayor elemento es: " << mayor << endl;
    return 0;
}
