/*
3. Preço de venda com lucro variável
Um pequeno comerciante quer um sistema que o ajude a calcular o preço de venda de um 
produto com base no preço de custo e em uma margem de lucro que varia conforme o valor. 
A regra é: se o produto custar até R$ 50,00, aplica-se 30% de lucro. Se custar entre 
R$ 50,01 e R$ 100,00, aplica-se 25%. Acima de R$ 100,00, aplica-se 20%. O programa deve 
pedir ao usuário o custo do produto e exibir o preço de venda calculado.
*/

#include <stdio.h>

int main(){

    float custo, preco;

    printf("Digite o custo: ");
    scanf("%f",&custo);

    if (custo<=50)
    {
        preco = custo*1.3;
    }else if(custo>50 && custo<=100){ //50.01 pode gera problemas dentro do if
        preco = custo*1.25;
    }else{
        preco = custo*1.2;
    }
    printf("O preço do produto é R$ %.2f",preco);

    return 0;
}