#include <stdio.h>

int main()
{
    int a,b,total=1;
    printf("Informe o expoente: ");
    scanf("%d",&a);

    do
    {
        printf("Informe a base: ");
        scanf("%d",&b);
        if (a<0)
        {
            printf("negativo, erro");
        }
    } while (a<0);

    for (int i=1; i<=b; i++){
            total *= b;
        }

    printf("Resultado= %d",total);
    return 0;
}