#include <stdio.h>
#include <math.h>

int main() {
    int i;
    double s = 0.0;
    int sinal = 1;

    for (i = 0; i < 51; i++) {
        int denominador = 2 * i + 1;
        s += sinal * (1.0 / pow(denominador, 3));
        sinal *= -1; // Alterna o sinal
    }

    double pi = pow(32 * s, 1.0/3.0);

    printf("Aproximacao de pi usando 51 termos: %.15lf\n", pi);

    return 0;
}