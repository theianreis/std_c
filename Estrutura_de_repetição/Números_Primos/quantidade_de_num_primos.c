#include <stdio.h>

int main() {

    int valor_i, valor_f;
    int i = 0;

    printf("Digite o valor inicial do intervalo: ");
    scanf("%d", &valor_i);

    printf("Digite o valor final do intervalo: ");
    scanf("%d", &valor_f);

    for(int j = valor_i; j <= valor_f; j++) {
        int divisores = 0;

        if (j > 1) {  
            for(int i = 1; i <= j; i++) {
                if(j % i == 0) {
                    divisores++;
                }
            }

            if(divisores == 2) {  
                i++;
            }
        }
    }

    printf("Quantidade de números primos no intervalo: %d\n", i);

    return 0;
}
