#include <iostream>
using namespace std;
int main(){
    int numeros[3][3];
    for (size_t k = 0; k < 3; k++)
    {
        for (size_t t = 0; t < 3; t++)
        {
            cout << "Escriba un numero ["<<k<<"]"<<"["<<t<<"]: "<<endl; 
            cin >> numeros[k][t];
        }
    }
    cout << "Matriz Original\n"<<endl;
    for (size_t k = 0; k < 3; k++)
    {
        for (size_t t = 0; t < 3; t++)
        {
            cout << numeros[k][t];
        }
            cout << "\n";
    }
    cout << "Matriz Transpuesta \n"<<endl;
    for (size_t k = 0; k < 3; k++)
    {
        for (size_t t = 0; t < 3; t++)
        {
            cout << numeros[t][k];
        }
        cout << "\n";
    }
    return 0;
}