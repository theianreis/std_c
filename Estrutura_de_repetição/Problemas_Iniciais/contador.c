#include <stdio.h>

int main(){

    int num1, num2;

    printf("Digite o valor inicial para contagem: ");
    scanf("%d",&num1);
    printf("Digite o ultimo valor: ");
    scanf("%d",&num2);

    //Não é necessário um inicializador: Pois a condição garante que vamos iniciar com num1
    for(;num1<=num2;num1++){
        printf("%d \n",num1);
    }

    return 0;
}