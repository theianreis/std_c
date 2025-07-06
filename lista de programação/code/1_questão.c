#include <stdio.h>

int main() {
    double x, s = 0.0;
    int k, i;
    double fatorial;

    printf("Digite um valor real X: ");
    scanf("%lf", &x);

    
    for (k = 0; k < 20; k++) {
        fatorial = 1.0;
        //fatorial
        for (i = 1; i <= k; i++) {
            fatorial *= i; 
        }
        // A série alterna 
        if (k % 2 == 0) {
            s += x / fatorial;  
        } else {
            s -= x / fatorial;
        }
    }

    printf("O valor da soma S é: %.2lf\n", s);

    return 0;
}
