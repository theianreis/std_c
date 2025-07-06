#include <stdio.h>

int main(){

    float vetor[12];
    float media=0.0,sum=0.0;

    printf("Leitura de dados de 12 posições: ");
    for(int i=0; i<12;i++){
        scanf("%f",&vetor[i]);
        sum += vetor[i];
    }

    media = sum/12;
    printf("A média aritmética das notas é: %f ",media);
    return 0;
}