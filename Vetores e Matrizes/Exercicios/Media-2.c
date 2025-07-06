#include <stdio.h>

int main(){

    int a[12], i =0 ,menor, maior;
    float media=0.0;

    printf("Leitura de 12 posições..\n");

    scanf("%d",&a[i]);
    maior=a[0];
    menor=a[0];

    for (int i = 1; i<12; i++)
    {
        scanf("%d",&a[i]);
        media+=a[i];
        if(a[i]>maior){
            maior = a[i];
        }else{
            if (a[i]<menor)
            {
                menor = a[i];
            } 
        }
    }
    media = media/i;
    printf("Media = %f",media);

    return 0; 
}