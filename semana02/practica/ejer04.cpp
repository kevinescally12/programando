//Ejer 04 trapecio
#include<stdio.h>
#include<math.h>
using namespace std;
int main(){
    int basem,basen,altura,area;
    printf("Ingrese la base mayor: \n",basem);
    scanf("%d", &basem);
    printf("Ingrese la base menor: \n",basen);
    scanf("%d", &basen);
    printf("Ingrese la altura: \n",altura);
    scanf("%d", &altura);
    area=(basem+basen)*altura/2;
    printf("El area es: %d\n", area); 
    return 0;
}