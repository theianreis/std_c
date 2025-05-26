#include <stdio.h>

int main(){

    float area_retangulo, lado1, lado2;

    printf("Infome o comprimento: ");
    scanf("%f",&lado1);
    printf("Informe a altura: ");
    scanf("%f",&lado2);

    area_retangulo= lado1*lado2;

    if (lado1==lado2)
    {
        printf("Não vendemos áreas retangulares");
    }else{
        printf("A área do terreno é %f",area_retangulo);
    }

    return 0;
}