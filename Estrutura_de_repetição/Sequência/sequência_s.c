#include <stdio.h>

int main(){

    int n;
    float S=0.0;

    printf("Digite o valor de n: ");
    scanf("%d", &n);


    for(int i=1 ;i<=n;i++){
        S += (float)i/(n-i+1);
    }

    printf("%.2f", S);


    return 0;
}