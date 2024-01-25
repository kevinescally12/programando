#include <iostream>
#include <cctype> 

using namespace std;
int main() {
    string oracion;
    cout << "Ingrese una oracion: "<<endl;
    getline(cin, oracion);
    int ca = 0, ce = 0, ci = 0, co = 0, cu = 0;
    for (char caracter : oracion) {
        char caracter_min = tolower(caracter);
        switch (caracter_min) {
            case 'a':
                ++ca;
                break;
            case 'e':
                ++ce;
                break;
            case 'i':
                ++ci;
                break;
            case 'o':
                ++co;
                break;
            case 'u':
                ++cu;
                break;
        }
    }
    cout << "Cantidad de vocales en la oracion:" << endl;
    cout << "A: " << ca << endl;
    cout << "E: " << ce << endl;
    cout << "I: " << ci << endl;
    cout << "O: " << co << endl;
    cout << "U: " << cu << endl;
    return 0;
}