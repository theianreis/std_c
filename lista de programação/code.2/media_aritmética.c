#include <stdio.h>

int main(){

    float media, num_total=0, num;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um valor para calcular a média: ");
        scanf("%f",&num);
        num_total += num;
    }
    media = num_total/10;

    printf("%.2f",media);

    return 0;
}