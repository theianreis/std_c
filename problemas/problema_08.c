#include <stdio.h>

int main()
{
    //declarar variavel
    float nota1, nota2 , nota3, nota4,media;
    
    //atribrui valores a variavel
    printf("Digite o valor da nota 1: ");
    scanf("%f",&nota1);
    printf("Digite o valor da nota 2: ");
    scanf("%f",&nota2);
    printf("Digite o valor da nota 3: ");
    scanf("%f",&nota3);
    printf("Digite o valor da nota 4: ");
    scanf("%f",&nota4);
    
    //Processamento
    media = (nota1+nota2+nota3+nota4)/4;
    
    //Estrutura de controle - Condicional
    if (media >= 5){
        printf("Foi aprovado com média %.2f",media);
    }
    else{
        printf("Sua média foi de %.2f Não foi aprovado", media);
    }
    

    return 0;
}