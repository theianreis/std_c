#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a[200];
    int menor, maior;
    float media = 0.0;

    srand(time(NULL));

    a[0] = rand() % 1000;
    maior = a[0];
    menor = a[0];
    media += a[0];

    printf("%d ", a[0]);

    for (int i = 1; i < 200; i++) {
        a[i] = rand() % 200;
        media += a[i];
        printf("%d ", a[i]);

        if (a[i] > maior) {
            maior = a[i];
        } else if (a[i] < menor) {
            menor = a[i];
        }
    }

    media = media / 200.0;

    printf("\nO maior valor: %d\n", maior);
    printf("O menor valor: %d\n", menor);
    printf("Média = %.2f\n", media);

    return 0;
}
