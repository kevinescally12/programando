#include <iostream>

using namespace std;
int main(){
    int n1, n2, n3, max;
    cout<<"ingrese 3 numero:\n";
    cin>>n1>> n2>>n3;
    max = n1;
    if(max<n2)
    max = n2;
    if(max<n3)
    max = n3;
    cout<<"el numero mayor es: "<<max<<endl;

return 0;
}