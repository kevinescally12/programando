//Ejer 01 cuadrado
#include<stdio.h>
#include<math.h>
using namespace std;
int main(){
    int lado,area,perimetro;
    float diagonal;
    printf("Ingrese el lado del caudrado:");
    scanf("%d", &lado);
    area=lado*lado;
    perimetro=lado*4;
    diagonal=lado*sqrt(2);
    printf(" El area es: %d\n ", area);
    printf(" El perimetro es: %d\n ", perimetro);
    printf(" La diagonal es:%f\n ", diagonal);
    return 0;
}