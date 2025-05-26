#include <stdio.h>

int main(){

    float area , base_menor, base_maior, altura;

    printf("Infome a Base maior: ");
    scanf("%f",&base_maior);
    printf("Informa a Base menor: ");
    scanf("%f",&base_menor);
    printf("Informe a altura: ");
    scanf("%f",&altura);

    area = ((base_maior+base_menor)*altura)/(2);

    printf("O trapézio tem área igual a %f", area);
    return 0;
}