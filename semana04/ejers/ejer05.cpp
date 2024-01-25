#include <iostream>
using namespace std;
int main()
{
    int Can;
    cout<<"Ingrese la cantidad de numeros que desea sumar:\n";
    cin>>Can;
    int contador = 0,numero, suma = 0;
    while (true)
    {
        cout << "ingresa el numero " << contador + 1 << ":\n ";
        cin >> numero;
        if(contador==Can)
        break;
        suma += numero;
        contador++;
    }
    cout << "la suma de los numeros es " << suma << endl;
    return 0;
}