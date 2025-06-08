#include <stdio.h>

int main(){

    int vetor[5]= {1,2,3,4,5};

    int n =5; 
    for (int i = n-1 ; i>=0 ;i--){ 
        printf("%d\n",vetor[i]);
    }

    return 0;
}