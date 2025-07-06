#include <stdio.h>
#include <math.h>

int main() {
    int num, original, resto, n, soma;


    for (num = 100; num <= 10000; num++) {
        original = num;
        n = 0;

        int temp = num;
        while (temp != 0) {
            temp =temp/10;
            n++;
        }

        soma = 0;
        temp = num;

        while (temp != 0) {
            resto = temp % 10;
            soma += pow(resto, n);
            temp =temp/10;
        }

        if (soma == original) {
            printf("%d\n", original);
        }
    }

    return 0;
}
