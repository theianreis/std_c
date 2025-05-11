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