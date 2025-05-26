#include <stdio.h>

int main(){

    float raio , altura, pi = 3.14,area, quantidade_de_latas, preco=3, preco_de_latas;

    printf("Informe o raio: ");
    scanf("%f",&raio);
    printf("Informe a altura: ");
    scanf("%f",&altura);
    
    area = 2*pi*raio*(raio+altura);

    quantidade_de_latas = area/15;

    preco_de_latas = preco*quantidade_de_latas;

    printf("A quantidade de latas necessária para pintar %f m^2 é %f e preco %f", area, quantidade_de_latas,preco);

    return 0;
}