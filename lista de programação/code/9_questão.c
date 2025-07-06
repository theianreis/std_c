#include <stdio.h>
#include <math.h>  // Para sqrt()


int main() {
    double vetor[10];
    double soma = 0.0, media, desvio = 0.0;
    int i;

    printf("Digite %d numeros:\n", 10);
    for (i = 0; i < 10; i++) {
        scanf("%lf", &vetor[i]);
        soma += vetor[i];
    }

    media = soma / 10;

    for (i = 0; i < 10; i++) {
        desvio += (vetor[i] - media) * (vetor[i] - media);
    }

    // Dividir por (n-1) e tirar a raiz quadrada
    desvio = sqrt(desvio / (10 - 1));

    printf("A media eh: %.2lf\n", media);
    printf("O desvio padrao eh: %.2lf\n", desvio);

    return 0;
}
