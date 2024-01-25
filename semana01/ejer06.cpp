///Cambio de dolares a soles
#include<iostream>

using namespace std;

const double D=3.76;

double c;

double S;

int main(){

    cout<<"Ingrese la cantidad de dolares que desea cambiar:";

    cin>>c;

    S=c*D;

    cout<<"El cambio de "<<c<<" dolares a soles es de:"<<S<<endl;

    return 0;
}