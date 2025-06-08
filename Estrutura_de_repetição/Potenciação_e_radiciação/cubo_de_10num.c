/*
Escreva um algoritmo em linguagem C que receba dez números do usuário e
imprima o cubo de cada número. 
*/

#include <stdio.h>
#include <math.h>

int main() {
    int i = 0, num;
    double cubo;

    while (i < 10) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &num);

        cubo = pow(num, 3); 

        printf("O cubo de %d é %.0lf\n", num, cubo);

        i++;
    }

    return 0;
}
