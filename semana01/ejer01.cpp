///Suma de precios
#include<iostream>
using namespace std;
int main(){
    int Precio1;
    int Precio2;
    int Total;
    cout<< "Indique el primer precio:" ;
    cin>> Precio1;
    cout<<"Indique el segundo precio:";
    cin>> Precio2;
    Total = Precio1+Precio2;
    cout<<"EL valor total: "<<Total;
    return 0;
}