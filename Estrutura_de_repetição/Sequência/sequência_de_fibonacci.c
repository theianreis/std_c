#include <stdio.h>

int main() {
    int n, count = 0;
    int t1 = 1, t2 = 1, nextTerm;

    printf("Digite o número de termos: ");
    scanf("%d", &n);

    printf("Sequência de Fibonacci: ");

    while (count < n) {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        count++;
    }

    printf("\n");
    return 0;
}
