/*

*/

#include <stdio.h>

int main(){

    float salario_i,salario;

    printf("Informe o salário: ");
    scanf("%f",&salario_i);

    salario = salario_i*1.15;
    salario = salario*0.92;

    printf("Salário Inicial: %.2f\n Salário final: %.2f",salario_i, salario);

    return 0;
}