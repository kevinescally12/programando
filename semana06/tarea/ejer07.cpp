#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    // Definir las dimensiones de la matriz
    const int filas = 2;
    const int columnas = 2;

    // Crear la matriz de strings
    vector<vector<string>> matriz(filas, vector<string>(columnas));

    // Solicitar al usuario ingresar palabras para cada celda de la matriz
    cout << "Ingrese varias palabras para cada celda de la matriz:\n";
    for (int i = 0; i < filas; ++i)
    {
        for (int j = 0; j < columnas; ++j)
        {
            cout << "Palabras para [" << i + 1 << "][" << j + 1 << "]: ";
            getline(cin, matriz[i][j]);
        }
    }

    // Concatenar las palabras de cada fila en una única cadena y mostrar los resultados
    cout << "\nResultados (concatenación de palabras por fila):\n";
    for (int i = 0; i < filas; ++i)
    {
        string filaConcatenada;
        for (int j = 0; j < columnas; ++j)
        {
            filaConcatenada += matriz[i][j] + " ";
        }
        cout << "Fila " << i + 1 << ": " << filaConcatenada << endl;
    }

    return 0;
}
