#include <stdio.h>

int main(){
    float notas[5]={10,9,6,9,10};
    float media = 0.0, soma=0.0;

    for (int i=0;i<5;i++){
        soma += notas[i];
    }

    media = soma/5.0;

    printf("A média aritmética das notas é: %f ",media);

    return 0;
}