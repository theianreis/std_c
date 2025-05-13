/*
1. Desconto progressivo em uma loja: Imagine que você está desenvolvendo o sistema de 
caixa para uma loja de roupas. A política de descontos funciona da seguinte forma: se o 
cliente gastar menos de R$ 100,00, ele não recebe desconto algum. Se o valor da compra 
estiver entre R$ 100,00 e R$ 500,00 (inclusive), ele recebe 10% de desconto. Se o valor
ultrapassar R$ 500,00, o desconto é de 20%. Seu programa deve solicitar ao usuário o 
valor total da compra e, com base nas regras descritas, informar o valor do desconto 
aplicado e o valor final a pagar.
*/

#include <stdio.h>

int main(){

    float gasto;

    printf("Digite o valor que foi gasto: ");
    scanf("%f",&gasto);
    
    if (gasto<100)
    {
        printf("Valor da compra é de %f", gasto);
    } else{
        if (gasto>=100 && gasto<=500)
        {
            gasto = gasto*0.90;
            printf("Valor da compra é de %.2f", gasto);
        }
        else{
            gasto = gasto*0.8;
            printf("Valor da compra é de %.2f", gasto);
        }
    }

    return 0;
}