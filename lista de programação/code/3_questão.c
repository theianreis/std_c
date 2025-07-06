#include <stdio.h>

int main() {
    double x, resultado = 1.0;

    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    for (int i = 1; i < 15; i++) {
        double fatorial = 1.0;

        for (int j = 1; j <= i; j++) {
            fatorial *= j;
        }

        double termo = pow(x, i) / fatorial;
        resultado += termo;
    }

    printf("A aproximacao de e^%.2f com 15 termos da serie é: %.10f\n", x, resultado);


    return 0;
}
