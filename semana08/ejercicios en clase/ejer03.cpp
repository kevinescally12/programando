#include <iostream>
#include <cmath>

using namespace std;

int suma(int a, int b){
    return a+b;
}
int resta(int a, int b){
    return a-b;
}
int multi(int a, int b){
    return a*b;
}
int divi(int a, int b){
    return a/b;
}
int cuadrado(int a, int b){
    return pow(a,2);
    return pow(b,2);
}

int main(){
    double x, y ;
    cout<<"Ingrese el primer valor : "<<endl;
    cin>>x;
    cout<<"Ingrese el segundo valor : "<<endl;
    cin>>y;
    double resultado1=suma(x,y);
    double resultado2=resta(x,y);
    double resultado3=multi(x,y);
    double resultado4=divi(x,y);
    double resultado5=cuadrado(x,y);

    cout<<"\n\n";

    cout<<"Los resultados son "<<endl;
    cout<<"La suma es : "<<resultado1<<endl;
    cout<<"La resta es : "<<resultado2<<endl;
    cout<<"La multiplicacion es : "<<resultado3<<endl;
    cout<<"La divicion es : "<<resultado4<<endl;
    cout<<"El cuadrado de los dos es: "<<resultado5<<endl;

    return 0;
}