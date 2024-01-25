#include <iostream>
using namespace std;

int sumar(int a, int b, int c, int d, int e, int &sum)
{
    sum=a+b+c+d+e;
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
    cout<<"El valor es "<<sum;
    return 0;
}