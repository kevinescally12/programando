#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main ()
{
    vector<int> numeros;
    int tamano_del_vector;
    cout<<"Indique el tamano del vector :"<<endl;
    cin>>tamano_del_vector;
    cout<<"Ingrese los valores para el vector :"<<endl;
    for(int i = 0; i < tamano_del_vector; i++)
    {
        int valor;
        cout << "(Valor " << i + 1 << ":) ";
        cin >> valor;
        numeros.push_back(valor);
    }
    cout<<"Los valores del vector ordenados de manera ascendete :"<<endl;
    sort(numeros.begin(), numeros.end());
    for (int i = 0; i < tamano_del_vector; ++i)
    {
        cout << numeros[i] << " ";
    }
    return 0;
}