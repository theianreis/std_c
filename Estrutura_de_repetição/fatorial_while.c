#include <stdio.h>

int main(){
    int fatorial=1, count=1, num;
    printf("Informe o número: ");
    scanf("%d", &num);
    while (count<=num)
    {
        fatorial *= count;
        count++;
    }
    printf("O fatorial do número %d é %d",num, fatorial);
    return 0;
}