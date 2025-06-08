#include <stdio.h>

int main() {
    int termos, n = 0;
    float x, resultado = 0.0;

    printf("Digite o valor de x: ");
    scanf("%f", &x);

    printf("Digite o número de termos da série: ");
    scanf("%d", &termos);

    while (n < termos) {
        float pot = 1.0;  // x^n
        int fat = 1;      // n!

        // Calcula x^n com for
        for (int i = 0; i < n; i++) {
            pot *= x;
        }

        // Calcula n! com for
        for (int i = 1; i <= n; i++) {
            fat *= i;
        }

        // Adiciona o termo da série ao resultado
        resultado += pot / fat;

        n++;
    }

    printf("O valor aproximado de e^%.2f com %d termos é: %.6f\n", x, termos, resultado);

    return 0;
}
