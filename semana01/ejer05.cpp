///area de un circulo
#include<iostream>

#include<cmath>

using namespace std;

int main(){

    const double PI = 3.1416;
    double radio;

    cout << "Ingrese el radio del circulo: ";
    cin >> radio;

    double area = PI * pow(radio, 2);   
    cout<<"El area es:"<<area;

    return 0;
}