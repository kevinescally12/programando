#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<char> caracter;
    cout << "(Para cerrar el programa escriba (back)) "<<endl;
    cout << "Ingrese caracteres :"<<endl;
    string a;
    while (cin >> a && a != "back")
    {
        for (char c : a)
        {
            caracter.push_back(c);
        }
    }

    cout << "Ingrese el caracter a buscar "<<endl;
    char b;
    cin >> b;

    int c = 0;
    for (char d : caracter)
    {
        if (d == b)
        {
            c++;
        }
    }
    cout << "El caracter '" << b << "' aparece " << c << " veces en el vector";

    return 0;
}
