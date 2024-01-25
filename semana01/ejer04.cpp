///Area de un trapecio
#include<iostream>

using namespace std;

int Basemayor;

int Basemenor;

int altura;

int Area;

int main(){

    cout<<"Ingrese la base mayor:";

    cin>>Basemayor;

    cout<<"Ingrese la base menor:";

    cin>>Basemenor;

    cout<<"Ingrese la altura:";

    cin>>altura;

    Area=Basemayor+Basemenor*altura/2;

    cout<<"El area es:"<<Area;

    return 0;
}