#include <stdio.h>

int main() {
    int n;
    double X, Y = 0.0;

    printf("Digite o numero de termos: ");
    scanf("%d", &n);
    printf("Digite o valor de X: ");
    scanf("%lf", &X);  // Corrigido para ler double

    double sinal = 1.0;   // Controle de sinal
    double fatorial = 1.0; // Inicia com 0! = 1

    for (int i = 0; i < n; i++) {
        if (i > 0) {
            fatorial *= i; // Atualiza fatorial: i! = (i-1)! * i
        }

        Y += sinal * X / fatorial; // Acumula o termo
        sinal = -sinal; // Alterna o sinal para o próximo termo
    }

    
    printf("Resultado: %.15f\n", Y);
    return 0;
}