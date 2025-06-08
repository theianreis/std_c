#include <stdio.h>

int main(){

    int n;
    float P=0.0;

    printf("Digite o número de termos: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        P += 1.0/(i*i);
    }
    printf("%.2f",P);

    return 0;
}