#include <stdio.h>

int main(){

    int n, a ,b;
    int count = 0; // Conta os múltiplos
    int num =1; // Número atual que está sendo contado

     printf("Digite o valor de n: ");
    scanf("%d", &n);

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    while (count<n){
    {
        if (num % a == 0 || num%b==0)
        {
            printf("%d\n",num);
            count++;
        }
        num++;
    }
}

return 0;
}