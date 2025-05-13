/*
2. Determinação de tipo de triângulo
Você está criando um programa para ajudar estudantes de geometria. O usuário deve 
informar três números reais positivos representando os lados de um triângulo. O programa
deve primeiro verificar se esses valores podem realmente formar um triângulo (ou seja,
a soma de dois lados precisa ser maior que o terceiro, para todas as combinações). Se 
não for possível, o programa deve avisar. Se for possível, ele deve dizer se o 
triângulo é equilátero (todos os lados iguais), isósceles (dois lados iguais) ou 
escaleno (todos os lados diferentes).
*/

#include <stdio.h>

int main(){

    int lado1, lado2, lado3;

    printf("Informe o valor do lado 1: ");
    scanf("%d",&lado1);
    printf("Informe o valor do lado 2: ");
    scanf("%d",&lado2);
    printf("Informe o valor do lado 3: ");
    scanf("%d",&lado3);

    if (lado1+lado2>lado3 && lado2+lado3>lado1 && lado1+lado3>lado2)
    {
       if (lado1 ==lado2 && lado2==lado3) //por que não usamos o else if aqui
       {
            printf("Triângulo equilátero");
       }else if (lado1 == lado2 || lado2 == lado3 || lado1==lado3)
       {
            printf("Triângulo Isósceles");
       }else{
        printf("Triângulo Escaleno");
       } 
    }else{
        printf("Não temos um triângulo");
    }
}