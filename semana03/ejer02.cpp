#include <iostream>
using namespace std;
int main (){
    int x=10;
    if(true)x++;
    x++;
    if(true){
        x++;
    }
    x++;
    x++;
    cout<<x;
    return 0;
}
