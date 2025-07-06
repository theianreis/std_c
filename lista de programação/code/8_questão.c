#include <stdio.h>
#include <stdlib.h>


int main() {
    int vetor[10];
    int i, num, encontrado = 0;

    srand(1);

    printf("Vetor gerado: ");
    for (i = 0; i < 10; i++) {
        vetor[i] = i;
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("Digite um numero para procurar no vetor: ");
    scanf("%d", &num);

    for (i = 0; i < 10; i++) {
        if (vetor[i] == num) {
            printf("Numero %d encontrado na posicao %d.\n", num, i);
            encontrado = 1;
        }
    }

    return 0;
}
