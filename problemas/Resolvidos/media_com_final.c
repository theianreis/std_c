#include <stdio.h>

int main()
{
    // Declaração de variáveis
    float nota1, nota2, nota3, nota4, media, notafinal, novamedia;
    
    // Escanear as variáveis
    printf("Digite a nota 1: ");
    scanf("%f", &nota1);
    printf("Digite a nota 2: ");
    scanf("%f", &nota2);
    printf("Digite a nota 3: ");
    scanf("%f", &nota3);
    printf("Digite a nota 4: ");
    scanf("%f", &nota4);
    
    // Processamento
    media = (nota1 + nota2 + nota3 + nota4) / 4;  // Corrigido para dividir por 4

    
    // Estrutura de controle condicional 
    if (media >= 7) {
        printf("Sua nota foi %.2f. Logo, foi aprovado\n", media);
    }
    else {  // Caso o aluno não tenha média maior que 7
            printf("Digite a nota da prova final: ");
            scanf("%f", &notafinal);
            novamedia = (media + notafinal) / 2;
        if (novamedia >= 5) {
            printf("Sua nota foi %.2f. Logo, foi aprovado pela prova final\n", novamedia);
        }
        else {
            printf("Sua nota foi %.2f. Logo, foi reprovado pela prova final\n", novamedia);
        }
    }
    
    return 0;
}
