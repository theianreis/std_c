#include <stdio.h>

int main() {
    int numero, binario[32]; 
    int i;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero == 0) {
        printf("Binário: 0\n");
        return 0;
    }

    for (i = 0; numero > 0; i++) {
        binario[i] = numero % 2;
        numero = numero / 2;     
    }
    
    printf("Binário: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
    printf("\n");

    return 0;
}
