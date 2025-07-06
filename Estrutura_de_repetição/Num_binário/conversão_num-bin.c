#include <stdio.h>
#include <math.h>

int main() {
    int decimal, resto;
    
    printf("Digite um número decimal: ");
    scanf("%d", &decimal);

    if (decimal == 0) {
        printf("Binário: 0\n");
        return 0;
    }

    printf("Binário: ");
    
    int potencia = (int)log2(decimal);

    for (int i = potencia; i >= 0; i--) {
        int bit = decimal / (int)pow(2, i);
        printf("%d", bit);
        decimal = decimal % (int)pow(2, i);
    }

    printf("\n");
    return 0;
}
