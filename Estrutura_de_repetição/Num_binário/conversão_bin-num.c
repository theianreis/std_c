#include <stdio.h>
#include <math.h>

int main() {
    long long binario;
    int decimal = 0, potencia = 0, digito;

    printf("Digite um número binário: ");
    scanf("%lld", &binario);

    while (binario != 0) {
        digito = binario % 10;

        if (digito != 0 && digito != 1) {
            printf("Número inválido! Digite apenas 0s e 1s.\n");
            return 1;
        }

        decimal += digito * pow(2, potencia);
        potencia++;
        binario /= 10;
    }

    printf("Valor decimal: %d\n", decimal);

    return 0;
}
