#include <iostream>
using namespace std;

void Mostrar(int a, int b, int c, int d, int e, int sum)
{
    cout<<"La suma de "<<a<<"+"<<b<<"+"<<c<<"+"<<d<<"+"<<e<<" es igual a "<<sum;
}
int sumar(int a, int b, int c, int d, int e)
{
    int sum=a+b+c+d+e;
    return sum;
}
int llenar(){
    int r;
    cout<<"Ingrese un numero: "<<endl;
    cin>>r;
    return r;
}
int main(){
    int a,b,c,d,e,sum;
    a=llenar();
    b=llenar();
    c=llenar();
    d=llenar();
    e=llenar();
    sum=sumar(a,b,c,d,e);
    Mostrar(a,b,c,d,e,sum);
    return 0;
}