#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iterator>
#include <vector>
#define N 5
using namespace std;

void llenar(int v[]){

}

void mostrar(const int *inicio, const int *fin){
    for(const auto &elemento : vector<int>(inicio, fin)){
        cout<<elemento<<"\t";
    }
}

void ordenarBurbuja(int v[]){
    bool band=true;
    int temp;
    for(int i=0; i < N-1, i++){
        for(int j=i+1; j < N-1; j++){
            if (v[i]>v[j]){
                temp=v[i];
                v[i]=v[j];
                v[j]=temp;
            }
        }
    }
}

void intercambio(int &a, int &b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp
}

int main (){
    int vect[N];
    llenar(vect);   
    mostrar
    return 0;
}