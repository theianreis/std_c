

#include <stdio.h>

int main(){

    int vetor[5]={1,2,3,4,5};
    int indice;
    char continuar;

    do{

        printf("Qual indice você deseja obter: ");
        scanf("%d",&indice);

        if (indice>0 && indice<5)
        {
            printf("%d\n",vetor[indice]);
        }else{
            printf("Esse indice não existe no vetor\n");
        }
        

        
        printf("Você deseja continuar:  (s/n)");
        scanf(" %c",&continuar);
    }while(continuar=='s');
   
    return 0;
}