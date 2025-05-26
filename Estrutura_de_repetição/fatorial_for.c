#include <stdio.h>

int main(){

    int fatorial,count=1,num;
    
    printf("informe o número: ");
    scanf("%d",&num);

    for (fatorial =1, count=1;count<=num;count++)
    {
        fatorial *= count;
    }
    printf("O valor do fatorial %d é %d", num, fatorial);
    

    return 0;
}