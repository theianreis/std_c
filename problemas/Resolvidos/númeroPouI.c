#include <stdio.h>

int main(){
    //Declaração de variáveis
    int number;

    //Atribuição de variáveis 
    printf("Defina o valor do número 1: ");
    scanf("%d",&number);

    //Estrutura de controle => Avalição do valor par ou ímpar
    if(number%2==0){
        printf("O valor é par");
    }
    else{
        printf("o valor é ímpar");
    }
}   