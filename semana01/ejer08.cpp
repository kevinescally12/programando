///Calculadora
#include <iostream>
#include <cmath>
using namespace std;
double o1, o2, r;
char o;
int main(){
    cout<< "Ingrese el primer numero:";
    cin>>o1;
    cout<< "Ingrese la operacion (+,-,*,/): ";
    cin>>o;
    cout<< "Ingrese el segundo numero:";
    cin>>o2;
    switch (o){
    case '+':
        r=o1+o2;
        break;
    case '-':
        r=o1-o2;
        break;
    case '*':
        r=o1*o2;
        break;
    case '/':
        if(o2 !=0){
            r=o1/o2;
        } else {
            cout<<"Error por dividir con 0.\n";
            return 1;
        }
        break;
    default:
        cout<<"Operacion no valida.\n";
        return 1;
    }
cout<<"El resultado es:"<< r <<"\n";
return 0;
}