/*
Baskara
*/

#include <stdio.h>
#include <math.h>

int main(){

    //Declarar variáveis 
    float a,b,c,delta,r1,r2;
    
    //Atribuições
    printf("Digite o valor da variável a: ");
    scanf("%f",&a);
    printf("Digite o valor da variável b: ");
    scanf("%f",&b);
    printf("Digite o valor da variável c: ");
    scanf("%f",&c);

    //Processamento
    delta = b*b - 4*a*c;
    r1 = (-b + sqrt(delta) ) / (2*a);
    r2 = (-b - sqrt(delta) ) / (2*a);

    //Estrutura de controle condicional 
    if(delta<0){
        printf("Não existem raízes reais");
    }else{
        if (delta==0)
        {
            printf("Existe apenas uma raiz para equação de segundo graus, sendo de valor %f",r1);
        }
        else{
            printf("Existem duas raízes para equação de segundo graus, sendo de valores r1 = %.2f e r2 = %.2f",r1,r2);
        }
    }
    return 0;
}