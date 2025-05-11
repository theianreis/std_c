#include <stdio.h>

int main()
{
    //Declarar variáveis
    float a,b;
    
    //Atribuição de valores as variáveis
    printf("Digite o valor de a: ");
    scanf("%f",&a);
    printf("Digite o valor de b: ");
    scanf("%f",&b);
    
    //Estrutura de controle --> avaliação do maio valor
    if(a>b){
        printf("a é maior do que b");
    }
    else{
        printf("b é maior do que a");
    }


    return 0;
}