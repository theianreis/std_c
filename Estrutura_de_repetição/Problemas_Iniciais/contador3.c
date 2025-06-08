#include <stdio.h>

int main(){

    int num1,num2;

    printf("Digite o valor inicial da contagem: ");
    scanf("%d",&num1);

    printf("Digite o valor final da contagem: ");
    scanf("%d",&num2);

    do
    {
        printf("%d\n",num1);
        num1 = num1 + 1;
    } while (num1<=num2);
    

    return 0;
}