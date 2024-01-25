#include <iostream>
using namespace std;
int main() {
    int suma = 0;
    for (int i = 1; i <= 30; ++i) {
        suma += i;
    }
    cout << "La suma de los numeros del 1 al 30 es " << suma <<endl;
    return 0;
}