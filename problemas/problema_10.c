#include <stdio.h>

int main()
{
    //Declaração de variáveis
    double a,b,c,delta,x_1,x_2;
    
    //Atribuir valores as variáveis
    printf("Defina o valor de a: ");
    scanf("%lf",&a);
    printf("Defina o valor de b: ");
    scanf("%lf", &b);
    printf("Defina o valor de c: ");
    scanf("%lf", &c);
    
    //Processamento
    delta = (b*b-4*a*c);
    
    //Estrutura de Controle
    if(delta>0){
        x_1 = (-b+delta)/2*a;
        x_2 = (-b-delta)/2*a;
        printf("Temos como x_1 = %lf e x_2 = %lf", x_1, x_2);
    }
    else if(delta==0){
        printf("x_1 == x_2. Portanto, existe apenas um raiz, x = %lf",x_1);
    }
    else{
        printf("Não existe raizes nos reais");
    }
    
    return 0;
}