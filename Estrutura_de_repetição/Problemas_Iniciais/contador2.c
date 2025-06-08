#include <stdio.h>

int main(){

    int num1=0, num2;

    printf("Digite o valor inicial da contagem: ");
    scanf("%d",&num1);

    printf("Digite o valor final da contagem: ");
    scanf("%d",&num2);

    //Se quiser imprimir o valor inicial, primeiro imprima, depois mude.
    while (num1<=num2)
    {
        printf("%d\n",num1);
        num1 = num1+1;
    }
    

    return 0;
}