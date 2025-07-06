#include <stdio.h>

int main(){

    int v[5]= {2,4,6,8,10};
    int soma = 0;

    for (int i =0 ; i<5;i++){
        soma +=v[i];
    }
    printf("Soma dos elementos = %d\n",soma);

    return 0;
}