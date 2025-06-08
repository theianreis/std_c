#include <stdio.h>

int main(){

    int fatorial, count, num;
    char seguir;

    do{
        fatorial =1;
        count =1;
        
        printf("Informe o valor: ");
        scanf("%d",&num);

        while (count<=num)
        {
        fatorial *= count;
        count++;
        }
        printf("O fatorial do número %d é %d \n",num, fatorial);

        printf("Deseja continuar: (s/n)");
        scanf(" %c",&seguir);

    }while(seguir=='s');    

    return 0;
}