/*
Sendo H = 1 + 1/2 + 1/3 + 1/4 + 1/n ... , faça um algoritmo em linguagem C 
para gerar o número H. O número N é lido do teclado.
*/

#include <stdio.h>

int main(){

    int n;
    float H=0;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        H += 1.0/i;
    }   
    printf("%.2f\n",H);

    return 0;
}