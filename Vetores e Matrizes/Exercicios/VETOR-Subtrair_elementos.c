#include <stdio.h>

int main(){

    int v[5]={1,2,2,1,0};
    int subtracao=0;

    for (int i=v[0];i<5;i++){
        subtracao -= v[i];
    }

    printf("Subtração dos elementos: %d\n",subtracao);
    return 0;
}