//Ejer 08 Triangulo, formula de heron
#include<stdio.h>
#include<math.h>
using namespace std;
int main(){
    double l1,l2,l3;
    float area, semip;
    printf("Ingrese el lado 1: \n",l1);
    scanf("%lf", &l1);
    printf("Ingrese el lado 2: \n",l2);
    scanf("%lf", &l2);
    printf("Ingrese el lado 3: \n",l3);
    scanf("%lf", &l3);
    semip=(l1+l2+l3)/2.0;
    area=sqrt(semip*(semip-l1)*(semip-l2)*(semip-l3));
    printf("El semiperimetro es:%f\n",semip);
    printf("El area es:%f\n", area);
    return 0;
}