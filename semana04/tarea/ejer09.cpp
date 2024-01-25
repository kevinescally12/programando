#include <iostream>
#include <vector>
using namespace std;
bool es_primo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int inicio, fin;
    cout << "Ingrese el numero de inicio: "<<endl;
    cin >> inicio;
    cout << "Ingrese el numero de fin: "<<endl;
    cin >> fin;
    if (inicio > fin) {
        cout << "Error: El numero de inicio debe ser menor al numero de fin." << endl;
        return 1;  
    }
    vector<int> primos;
    for (int numless = inicio; numless <= fin; ++numless) {
        if (!es_primo(numless)) {
            continue;
        }
        primos.push_back(numless);
    }
    cout << "Los numeros primos de " << inicio << " a " << fin << " son: "<<endl;
    for (int primo : primos) {
        cout << primo << " ";
    }
    cout << endl;
    return 0;
}
