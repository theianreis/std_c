//incompleto

#include <stdio.h>

int main(){

    int *vetor;
    int quantidade_de_elementos ,elemento; 
    char continuar;

    printf("Digite o número de termos que deseja incluir no vetor: ");
    scanf("%d",&quantidade_de_elementos);

    // Aloca memória para o vetor dinamicamente
    vetor = (int *)malloc(quantidade_de_elementos * sizeof(int));
    if (vetor == NULL) {
        printf("Erro de alocação de memória!\n");
        return 1; // sai do programa
    }


    do
    {
        printf("Digite o elemento que deseja adicionar: ");
        scanf("%d",&elemento);

        
        printf("Você deseja adicionar mais um termo ?");
        scanf(" %c",&continuar);
    }while (continuar == 's');
    

    return 0;
}