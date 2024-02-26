#include <iostream>

using namespace std;

inline int resta(int x, int y){
    return x - y;
}
int main (){
    int resultado = resta(15,10);
    cout<<resultado;
    return 0; 
}