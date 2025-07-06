#include <stdio.h>

int main(){

    int a[12], i =0 ,menor, maior, media=0;

    printf("Leitura de 12 posições..\n");

    scanf("%d",&a[i]);
    maior=a[0];
    menor=a[0];

    for (int i = 1; i<12; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>maior){
            maior = a[i];
        }else{
            if (a[i]<menor)
            {
                menor = a[i];
            } 
        }
    }
    printf("Maior valor:%d e o Menor valor: %d", maior,menor);

    return 0; 
}