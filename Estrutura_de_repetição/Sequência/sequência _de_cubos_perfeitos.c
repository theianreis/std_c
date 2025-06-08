#include <stdio.h>

int main(){

    int i=1, n_termo;

    printf("Digite o número de termos da sequência: ");
    scanf("%d",&n_termo);

    while (i<=n_termo)
    {
        printf("%d\n",i*i*i);
        i++;
    }
    return 0;
}