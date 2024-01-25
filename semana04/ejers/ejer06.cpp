#include <iostream>
using namespace std;
int main()
{
    int n1, n2, resultado;
    char sig;
    do
    {
        cout << "Ingresar dos numeros:" << endl;
        cin >> n1 >> n2;
        resultado = n1 + n2;
        cout << "La suma de " << n1 << " + " << n2 << " es igual a " << resultado<<endl;
        cout<<" Desea continuar? (si/no)";
        cin>>sig;
        sig=tolower(sig);
    }while(sig=='s');
    cout<<"Nos vemos luego!!";
    return 0;
}