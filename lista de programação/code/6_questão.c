#include <stdio.h>

int main() {
    int raiz, numero, dezena1, dezena2, soma;

    for (raiz = 32; raiz <= 99; raiz++) {
        numero = raiz * raiz;
        dezena1 = numero / 100;
        dezena2 = numero % 100;
        soma = dezena1 + dezena2;

        if (soma == raiz) {
            printf("%d\n", numero);
        }
    }

    return 0;
}
