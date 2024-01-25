#include <iostream>
#include <vector>
using namespace std;

int main()
{
    const int filas = 3;
    const int columnas = 3;
    vector<vector<int>> matriz_1(filas, vector<int>(columnas, 0));
    vector<vector<int>> matriz_2(filas, vector<int>(columnas, 0));

    cout << "Ingrese valores para la primera matriz:\n";
    for (int i = 0; i < filas; ++i)
    {
        for (int j = 0; j < columnas; ++j)
        {
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz_1[i][j];
        }
    }

    cout << "Ingrese valores para la segunda matriz:\n";
    for (int i = 0; i < filas; ++i)
    {
        for (int j = 0; j < columnas; ++j)
        {
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz_2[i][j];
        }
    }

    vector<vector<int>> matriz_resultante(filas, vector<int>(columnas, 0));
    for (int i = 0; i < filas; ++i)
    {
        for (int j = 0; j < columnas; ++j)
        {
            matriz_resultante[i][j] = matriz_1[i][j] * matriz_2[i][j];
        }
    }

    cout << "Matriz resultante :"<<endl;
    for (int i = 0; i < filas; ++i)
    {
        for (int j = 0; j < columnas; ++j)
        {
            cout << matriz_resultante[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}