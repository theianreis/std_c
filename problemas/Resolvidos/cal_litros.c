#include <stdio.h>
#include <math.h>

int main(){

    float l1, l2,l3, lt,q;

    printf("Quantas latas de 350ml deseja: ");
    scanf("%f",&l1);
    printf("Quantas garrafas de 600ml deseja: ");
    scanf("%f",&l2);
    printf("Quantas garrfas de 2L deseja: ");
    scanf("%f",&l3);

    lt =  l1+l2+l3;
    q = 0.35*l1 + 0.6*l2 + 2*l3;

    printf("Com a quantidade de %f você tem %f L de refrigerante", lt, q);

    return 0;
}
