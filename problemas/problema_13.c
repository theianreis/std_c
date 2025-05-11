#include <stdio.h>

int main()
{
    //Declarando variáveis 
    int num;
    
    //Atribuição de valores
    printf("Digite o valor do inteiro: ");
    scanf("%d",&num);
    
    //Estrutura de controle --> Para avaliar os valor num ser par ou ímpar
    if(num%2==0){
        printf("O valor %d é par",num);
    }
    else{
        printf("O valor %d é ímpar",num);
    }
    return 0;
}