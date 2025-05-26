/*
Clasificação de triângulo(equilátero, isósceles e escaleno) e verificar se é triângulo
*/

#include <stdio.h>

int main(){

    //Declaração de variáveis 
    int lado_1 , lado_2 , lado_3;

    //Atribuição de variáveis
    printf("Lado 1: ");
    scanf("%d",&lado_1);
    printf("Lado 2: ");
    scanf("%d",&lado_2);
    printf("Lado 3: ");
    scanf("%d",&lado_3);

    //Estrutura de controle condicional --> Avaliar se é triângulo
    if (lado_1+lado_2>lado_3 && lado_2+lado_3>lado_1 && lado_1+lado_3>lado_2)
    {
        if (lado_1 == lado_2 && lado_2 == lado_3)
        {
            printf("É triângulo, e classificado como equilátero");
        }else if (lado_1 == lado_2 || lado_2==lado_3 || lado_1 == lado_3)
        {
           printf("É triângulo, e classificado como isósceles");
        }else{
            printf("É triângulo, classificado como escaleno");
        }
    }else{
        printf("Não é triângulo");
    }
    
    return 0;
}