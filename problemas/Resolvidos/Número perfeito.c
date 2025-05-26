/*
Número perfeito
*/

#include <stdio.h>

int main(){

    //Declaração de variável 
    int number, i, soma = 0;

    //Atribuição 
    printf("Digite o número para ser avaliado como perfeito ou não: ");
    scanf("%d",&number);

    //Estrutura de controle de repetição--> Calcular o número de divisores
    for(i=1; i<number; i++){
        if (number%i == 0)
        {
            soma += i;
        } 
    }

    //Estrutura de controle condicional --> Avaliar se o número é perfeito
    if(soma == number){
        printf("Número é Perfeito");
    }else{
        printf("Número não é Perfeito");
    }
    return 0;
}