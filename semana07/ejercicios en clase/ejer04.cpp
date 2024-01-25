#include<iostream>
using namespace std;
int distance(int v, int t)
{
    int r=v*t;
    return r;
}
int llenar(){
    int r;
    cout<<" Ingrese un numero: "<<endl;
    cin>>r;
    return r;
}
void mostrar(int v,int t,int d){
    cout<<" la distancia es "<< v << " * " << t << " = " << d;
}
int main()
{
    int v,d,t;
    v=llenar();
    t=llenar();
    d=distance(v,t);
    mostrar(v,t,d);
}
