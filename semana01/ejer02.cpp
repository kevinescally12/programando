///Area de un rectangulo
#include<iostream>

using namespace std;

int largo;

int ancho;

int area;

int main(){

    cout<<"Ingrese el valor del largo:";

    cin>> largo;

    cout<<"Ingrese el valor del ancho:";

    cin>> ancho;
    
    area = largo*ancho;

    cout<<"El valor de el area es:"<<area;

    return 0;
}