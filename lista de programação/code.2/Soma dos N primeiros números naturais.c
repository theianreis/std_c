#include <stdio.h>

int main(){

    int S=0, n;

    printf("Digite o número de termos: ");
    scanf("%d",&n);

    for(int i = 0; i<n;i++){
        S += i;
    }

    printf("A soma da série harmônica até %d é: %d\n", n, S);

    return 0;
}