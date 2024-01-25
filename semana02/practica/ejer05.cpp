//Ejer 05 triangulo
#include<stdio.h>
#include<math.h>
using namespace std;
int main(){
    int lado1,lado2,base,altura,area,perimetro;
    printf("Ingrese el lado 1: \n",lado1);
    scanf("%d", &lado1);
    printf("Ingrese el lado 2: \n",lado2);
    scanf("%d", &lado2);
    printf("Ingrese la base: \n",base);
    scanf("%d", &base);
    printf("Ingrese la altura: \n",altura);
    scanf("%d", &altura);
    area=(base*altura)/2;
    perimetro=(lado1+lado2+base);
    printf(" El area es: %d\n ", area);
    printf(" El perimetro es: %d\n ", perimetro);
    return 0;
}