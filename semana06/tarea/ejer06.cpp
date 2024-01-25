#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    const int filas = 2;
    const int columnas = 2;

    vector<vector<string>> matriz(filas, vector<string>(columnas));

    cout<< "Ingrese palabras para cada celda de la matriz:\n";
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout<< "Palabra para [" << i + 1 << "][" << j + 1 << "]: ";
            getline(cin, matriz[i][j]);
        }
    }
    cout<<"\n\n";
    cout<< "Resultado :\n";
    for (int i = 0; i < filas; ++i) {
        string fc;
        for (int j = 0; j < columnas; ++j) {
            fc += matriz[i][j] + " ";
        }
        cout<< "Fila "<< i + 1 << "\n"<< fc<< endl;
    }
    return 0;
}