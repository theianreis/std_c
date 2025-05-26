/*
4. Cálculo simplificado de imposto de renda
Escreva um programa que simule o cálculo do imposto de renda mensal de uma pessoa com 
base em faixas salariais simplificadas. Se a pessoa recebe até R$ 2.000,00, está isenta.
 Se recebe entre R$ 2.000,01 e R$ 3.000,00, paga 8% sobre o valor excedente. 
 De R$ 3.000,01 a R$ 4.500,00, paga 18%. E acima de R$ 4.500,00, a alíquota é de 27,5%. 
 O programa deve solicitar o salário bruto e informar o valor do imposto devido.
*/

/*

#Teoria
- O valor excedente é a parte do salário que ultrapassa o limite 
inferior de uma faixa de isenção ou de tributação anterior.

*/

#include <stdio.h>

int main(){

    //Declaração de variáveis
    float sb,imposto;

    //Atribuição de variáveis
    printf("Digite o valor do seu salário bruto: ");
    scanf("%f",&sb);
    

    //Estrutura de Controle condicional--> Determinação do imposto
    /*
        (salário bruto - valor excedente)*aliquota
    */
     if (sb <= 2000.0) {
        printf("Isento de imposto.\n");
    } 
    else if (sb <= 3000.0) {
        imposto = (sb - 2000.0) * 0.08;
        printf("O imposto a ser pago é de: R$ %.2f\n", imposto);
    } 
    else if (sb <= 4500.0) {
        imposto = (1000.0 * 0.08) + ((sb - 3000.0) * 0.18);
        printf("O imposto a ser pago é de: R$ %.2f\n", imposto);
    } 
    else {
        imposto = (1000.0 * 0.08) + (1500.0 * 0.18) + ((sb - 4500.0) * 0.275);
        printf("O imposto a ser pago é de: R$ %.2f\n", imposto);
    }

    return 0;
}