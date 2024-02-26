#include <iostream>
#include <string>

using namespace std;

int funcion(int a = 4, int b = 8, int c = 5){
    cout<< a << "/" << b << "/" << c <<endl;
}
int main(){
    funcion(13,01,2006);
    return 0;
}