#include <stdio.h>

int main() {
    int idade;
    int otimo = 0, bom = 0, regular = 0, ruim = 0, pessimo = 0;
    int somaIdadeRuim = 0;
    int maiorIdadeOtimo = 0, maiorIdadeRuim = 0, maiorIdadePessimo = 0;

    char nota;

    for (int i = 0; i < 100; i++) {
        printf("\nDigite a idade do espectador %d: ", i + 1);
        scanf("%d", &idade);

       
        printf("Digite a nota (A - Otimo, B - Bom, C - Regular, D - Ruim, E - Pessimo): ");
        scanf("%c", &nota);

        if (nota >= 'a' && nota <= 'z') {
            nota = nota - 32;
        }

        if (nota == 'A') {
            otimo++;
            if (idade > maiorIdadeOtimo)
                maiorIdadeOtimo = idade;

        } else if (nota == 'B') {
            bom++;

        } else if (nota == 'C') {
            regular++;

        } else if (nota == 'D') {
            ruim++;
            somaIdadeRuim += idade;
            if (idade > maiorIdadeRuim)
                maiorIdadeRuim = idade;

        } else if (nota == 'E') {
            pessimo++;
            if (idade > maiorIdadePessimo)
                maiorIdadePessimo = idade;

        } else {
            printf("Nota inválida! Tente novamente.\n");
            i--; 
        }
    }

    float percBomRegular = ((float)(bom - regular) / 100.0) * 100.0;
    float mediaIdadeRuim = (ruim > 0) ? (float)somaIdadeRuim / ruim : 0;
    float percPessimo = ((float)pessimo / 100.0) * 100.0;
    int difIdadeOtimoRuim = maiorIdadeOtimo - maiorIdadeRuim;

    printf("\nQuantidade de respostas Ótimo: %d\n", otimo);
    printf("Diferença percentual entre Bom e Regular: %.2f%%\n", percBomRegular);
    printf("Média de idade dos que responderam Ruim: %.2f\n", mediaIdadeRuim);
    printf("Percentual de respostas Péssimo: %.2f%%\n", percPessimo);
    printf("Maior idade que respondeu Péssimo: %d\n", maiorIdadePessimo);
    printf("Diferença de idade entre maior idade que respondeu Ótimo e Ruim: %d\n", difIdadeOtimoRuim);

    return 0;
}
