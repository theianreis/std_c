#include <stdio.h>

int main(){

    int n_termo,i=1;

    printf("Digite o N-ésimo: ");
    scanf("%d",&n_termo);

    printf("Serie dos quadrados ate o %d-ésimo termo:\n", n_termo);

    while(i<=n_termo)
    {
        printf("%d\n",i*i);
        i++;
    }
    

    return 0;
}