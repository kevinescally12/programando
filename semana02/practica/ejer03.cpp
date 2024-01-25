//Ejer 03 rombo
#include<stdio.h>
#include<cmath>
using namespace std;
int main(){
    double diagonalm,diagonaln,area;
    float lado, perimetro;
    printf("Ingrese el valor de la diagonal mayor:\n",diagonalm);
    scanf("%lf", &diagonalm);
    printf("Ingrese el valor de la diagonal menor:\n",diagonaln);
    scanf("%lf", &diagonaln);
    area=(diagonalm*diagonaln)/2;
    lado=sqrt(pow(diagonalm/2,2)+pow(diagonaln/2,2));
    perimetro=4*lado;
    printf("El area es: %f\n", area);
    printf("El lado es :%f\n", lado);
    printf("EL perimetro es: %f\n", perimetro);
    return 0;
}