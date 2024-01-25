#include <iostream>
using namespace std;
int main() {
    int num;
    do {
        cout << "Ingrese un numero entero: \n";
        cin >> num;
        if (num == 0) {
            cout << "Por favor, ingrese un numero diferente de 0." << endl;
        } else {
            cout << "Collatz para " << num << endl;
            while (num != 1) {
                if (num % 2 == 0) {
                    num /= 2;
                } else {
                    num = 3 * num + 1;
                }
                cout << num << " \n ";
            }
            cout << "La secuencia Collatz ha llegado a 1." << endl;
        }
    } while (num == 0);
    return 0;
}

