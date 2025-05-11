#include <stdio.h>

int main(){
    //Declaração de Variáveis
    int number1, number2;

    //Atribuição de variáveis
    printf("Digite o primeiro valor: ");
    scanf("%d", &number1);
    printf("Digite o segundo valor: ");
    scanf("%d", &number2);

    //Estrutura de controle => Definir o maior e menor valor 
    if (number1>number2)
    {
        printf("O primeiro valor é maior que o segundo valor");
    }
    else{
        printf("O segundo valor é maior que o primeiro valor");
    }    

}