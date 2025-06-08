#include <stdio.h>

int main(){

    int num, limite,i;

    printf("Informe o número: ");
    scanf("%d",&num);

    printf("Informe o limite de multiplos: ");
    scanf("%d", &limite);

    for(i=1;i*num<=limite;i++){
        //num = num*i;
        printf("%d",num*i);
    }
    
    

    return 0;
}