/*
Escreva um algoritmo em linguagem C que imprima o quadrado dos números no
intervalo fechado de 1 a 20.
*/
#include <stdio.h>

int main(){

    int i=0, quadrado;

    while(i<20){
        i = i+1;
        quadrado = i*i;
        printf("%d\n",quadrado);
    }

    return 0;
}