
#include <stdio.h>

int main()
{
    //Definir variáveis
    int a,b,c,temp;
    
    //Atribuir valores as variáveis
    printf("Defina os valores de a: ");
    scanf("%d",&a);
    printf("Defina os valores de b: ");
    scanf("%d",&b);
    printf("Defina os valores de c: ");
    scanf("%d",&c);
    
    //Processamento
    
    //Estrutura de controle (Ordenação simples usando trocas (bubble sort de 3 elementos))
    if (a>b){
        temp = a;
        a = b;
        b = temp;
    }
    if (a>c){
        temp = a;
        a = c;
        c = temp;
    }
    if (b>c){
        temp = b;
        b = c;
        c = temp;
    }
    
    printf("Valores em ordem crescente: %d, %d, %.d\n", a, b, c);
    
    return 0;
}