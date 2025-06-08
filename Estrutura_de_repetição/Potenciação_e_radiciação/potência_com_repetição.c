#include <stdio.h>

int main() {
    int base, expoente;
    int resultado = 1; //acumulará o valor da potência.

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente (inteiro não-negativo): ");
    scanf("%d", &expoente);

    for (int i = 0; i < expoente; i++) { // vai de i ; ao expoente , incrementa(aumentar um valor) i em 1 a cada repetição.
        resultado *= base; //resultado = resultado * ... resultado * base
        //A cada repetição, a variável resultado é multiplicada por base e o valor atualizado é guardado de volta em resultado
    }

    printf("%d elevado a %d é %d\n", base, expoente, resultado);
    return 0;
}
