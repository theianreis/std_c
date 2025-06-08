#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(65001); 
    int num,i=1,num_nec=0;
    char continua;

    do
    {
        printf("Digite o valor do número: ");
        scanf("%d",&num);

        while (i<=num)
        {
            if (num%i==0)
            {
                num_nec++;   
            }
            i++;
        }
        if (num_nec>2)
            {
                printf("Ele não é primo");
            }else{
                printf("Ele é primo");
            }
        printf("\n");

        printf("Você quer avaliar outro número: (s/n)");
        scanf(" %c", &continua);
    } while (continua == 's');
    
    
    
    
    return 0;
}