#include <stdio.h>

int main(){

    int vetor[12];

    printf("Leitura de dados de 12 posições: ");
    for(int i=0; i<12;i++){
        scanf("%d",&vetor[i]);
    }

    return 0;
}