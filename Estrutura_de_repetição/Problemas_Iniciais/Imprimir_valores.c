/*
 Escreva um algoritmo em linguagem C que imprima todos os números inteiros
de 0 a 50. 
*/

#include <stdio.h>

int main(){

    int i=0;

    while (i<50)
    {
        i = i+1;
        printf("%d\n",i);
    }
    
    //printf("\n%d",i);
    

    return 0;
}