#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> pal;
    cout<<"(Para finalizar pon  (back)  y se cerrara el programa)"<<endl;
    cout << "Ingrese palabras "<<endl;
    string p;
    while (cin >> p && p != "back") 
    {
        pal.push_back(p);
    }
    string r;
    for (const string& p : pal) 
    {
        r += p + " ";
    }
    cout << "Cadena resultante:\n" << r << endl;
    return 0;
}