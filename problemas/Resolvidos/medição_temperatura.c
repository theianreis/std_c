#include <stdio.h>
#include <math.h>

int main(){

    float temperatura_C, temperatura_F;

    printf("Informe a temperatura em Celsius: ");
    scanf("%f",&temperatura_C);

    temperatura_F = 9*(temperatura_C/5)+32;

    printf("Temperatura em Fahrenheit: %.2f",temperatura_F);

    return 0;
}

