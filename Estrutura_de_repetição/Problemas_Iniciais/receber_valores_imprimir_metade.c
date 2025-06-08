/*
Escreva um algoritmo em linguagem C que receba dez números do usuário e
imprima a metade de cada número. 
*/

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    float num, metade;
    int i;

    for (i = 1; i <= 10; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%f", &num);

        metade = num / 2;

        printf("A metade do número %.2f é: %.2f\n", num, metade);
    }

    return 0;
}