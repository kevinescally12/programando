///Area de un triamgulo
#include<iostream>

using namespace std;

int Base;

int Altura;

int Area;

int main(){

    cout<<"Ingrese la base:";

    cin>>Base;

    cout<<"Ingrese la altura:";

    cin>>Altura;

    Area=Base*Altura/2;

    cout<<"El area es:"<<Area;
    
    return 0;
}