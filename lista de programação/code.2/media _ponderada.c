#include <stdio.h>

int main() {
    float num, num_total = 0, peso_total = 0, media_ponderada;
    int peso, valores;

    printf("Digite a quantidade de valores para calcular a média ponderada: ");
    scanf("%d", &valores);

    for (int i = 0; i < valores; i++) {
        printf("Digite o %dº valor: ", i + 1);
        scanf("%f", &num);

        printf("Informe o peso do %dº valor: ", i + 1);
        scanf("%d", &peso);

        num_total += num * peso;  
        peso_total += peso;       
    }

    if (peso_total != 0) {
        media_ponderada = num_total / peso_total;
        printf("A média ponderada é: %.2f\n", media_ponderada);
    } else {
        printf("A soma dos pesos não pode ser zero.\n");
    }

    return 0;
}
