#include <stdio.h>

int main() {
    int x[5], y[5];
    int soma[5], produto[5];
    int diferenca[5], intersec[5], uniao[10];
    int i, j, k;

    // Ler vetor x
    printf("Digite 5 numeros para o vetor X:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &x[i]);
    }

    // Ler vetor y
    printf("Digite 5 numeros para o vetor Y:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &y[i]);
    }

    // Soma e produto
    for (i = 0; i < 5; i++) {
        soma[i] = x[i] + y[i];
        produto[i] = x[i] * y[i];
    }

    // Diferença: x que não estão em y
    int dif_size = 0;
    for (i = 0; i < 5; i++) {
        int existe = 0;
        for (j = 0; j < 5; j++) {
            if (x[i] == y[j]) {
                existe = 1;
            }
        }
        if (existe == 0) {
            diferenca[dif_size] = x[i];
            dif_size++;
        }
    }

    // Interseção: x que estão em y
    int inter_size = 0;
    for (i = 0; i < 5; i++) {
        int existe = 0;
        for (j = 0; j < 5; j++) {
            if (x[i] == y[j]) {
                existe = 1;
            }
        }
        if (existe == 1) {
            // Verifica se já não está na intersec[]
            int ja_tem = 0;
            for (k = 0; k < inter_size; k++) {
                if (intersec[k] == x[i]) {
                    ja_tem = 1;
                }
            }
            if (ja_tem == 0) {
                intersec[inter_size] = x[i];
                inter_size++;
            }
        }
    }

    // União: todos de x + os de y que não estão em x
    int uniao_size = 0;
    for (i = 0; i < 5; i++) {
        uniao[uniao_size] = x[i];
        uniao_size++;
    }
    for (i = 0; i < 5; i++) {
        int existe = 0;
        for (j = 0; j < 5; j++) {
            if (y[i] == x[j]) {
                existe = 1;
            }
        }
        if (existe == 0) {
            uniao[uniao_size] = y[i];
            uniao_size++;
        }
    }

    // Mostrar resultados
    printf("\nSoma (x + y): ");
    for (i = 0; i < 5; i++) {
        printf("%d ", soma[i]);
    }

    printf("\nProduto (x * y): ");
    for (i = 0; i < 5; i++) {
        printf("%d ", produto[i]);
    }

    printf("\nDiferenca (x - y): ");
    if (dif_size == 0) {
        printf("Nenhum elemento.\n");
    } else {
        for (i = 0; i < dif_size; i++) {
            printf("%d ", diferenca[i]);
        }
    }

    printf("\nIntersecao: ");
    if (inter_size == 0) {
        printf("Nenhum elemento.\n");
    } else {
        for (i = 0; i < inter_size; i++) {
            printf("%d ", intersec[i]);
        }
    }

    printf("\nUniao: ");
    for (i = 0; i < uniao_size; i++) {
        printf("%d ", uniao[i]);
    }

    printf("\n");

    return 0;
}
