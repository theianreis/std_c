/*

-Colocar X reais de gasolina
-Ler o preço da gasolina 
-Valor do pagamento = L/reais

*/

#include <stdio.h>

int main(){

    float preco_da_gasolina=6, pagamento, litros;

    printf("Informe o valor do pagamento: ");
    scanf("%f",&pagamento);
    
    litros = pagamento/preco_da_gasolina;

    printf("Com o valor de %f é possivel colocar no seu tanque %.2f L de gasolina", pagamento,litros);

    return 0;
}