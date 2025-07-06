#include <stdio.h>

int main() {
    int v1[10];
    int v2[10];
    int inter[10];  // Vetor da interseção
    int i, j, m;
    int k = 0;      // Conta quantos já colocamos na interseção
    int existe;

    // Ler primeiro vetor
    printf("Digite os 10 numeros do primeiro vetor:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &v1[i]);
    }

    // Ler segundo vetor
    printf("Digite os 10 numeros do segundo vetor:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &v2[i]);
    }

    // Procurar números em comum
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            if (v1[i] == v2[j]) {
                // Verifica se já está na interseção
                existe = 0;
                for (m = 0; m < k; m++) {
                    if (inter[m] == v1[i]) {
                        existe = 1;
                    }
                }

                if (existe == 0) {
                    inter[k] = v1[i];
                    k = k + 1;
                }
            }
        }
    }

    // Mostrar resultado
    printf("Intersecao:\n");
    if (k == 0) {
        printf("Nao existe numero em comum.\n");
    } else {
        for (i = 0; i < k; i++) {
            printf("%d ", inter[i]);
        }
        printf("\n");
    }

    return 0;
}
