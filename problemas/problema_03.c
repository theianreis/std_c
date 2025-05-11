#include <stdio.h>

int main(){
    int ano;

    printf("Digite o valor do ano: ");
    scanf("%d",&ano);

    if ((ano%4==0 && ano%100 != 0)||(ano%400==0))
    {
        printf("%d é um ano bissexto.\n", ano);
    }else{
        printf("%d não é um ano bissexto.\n", ano);
    }
}