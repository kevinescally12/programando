#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string p,r;
    int i = 0;
    cout << "Ingrese una palabra: "<<endl;
    cin >> p;
    for (i = p.size() - 1; i >= 0; i--)
    {
        cout << p[i] << endl;
        r += p[i];
    }
    cout << r << endl;
    if (p == r)
    {
        cout << "Es palindromo la palabra: " << p << endl;
    }
    else
    {
        cout << "No es palindromo la palabra: " << p << endl;
    }
    return 0;
}
