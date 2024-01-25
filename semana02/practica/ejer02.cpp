//Ejer 02 rectangulo
#include<stdio.h>
#include<math.h>
using namespace std;
int main(){
    int base,altura,area,perimetro;
    float diagonal;
    printf("Ingrese la base: \n",base);
    scanf("%d", &base);
    printf("Ingrese la altura: \n",altura);
    scanf("%d", &altura);
    area=base*altura;
    perimetro= 2*(base+altura);
    diagonal=sqrt( pow(altura,2) + pow(base,2));
    printf(" El area es: %d\n ", area);
    printf(" El perimetro es: %d\n ", perimetro);
    printf(" La diagonal es:%f\n ", diagonal);
    return 0;
}