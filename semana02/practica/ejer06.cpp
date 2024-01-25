//Ejer 06 Triangulo inscrito
#include<stdio.h>
#include<math.h>
using namespace std;
int main(){
    int l1,l2,l3,radio,area;
    printf("Ingrese el lado 1: \n",l1);
    scanf("%d", &l1);
    printf("Ingrese el lado 2: \n",l2);
    scanf("%d", &l2);
    printf("Ingrese el lado 3: \n",l3);
    scanf("%d", &l3);
    printf("Ingrese el radio: \n",radio);
    scanf("%d", &radio);
    area=l1*l2*l3/(4*radio);
    printf("El area es:%d\n", area);
    return 0;
}