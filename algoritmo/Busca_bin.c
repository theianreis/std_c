#include <stdio.h>


int busca_binaria(int vetor[], int tamanho, int chave) {
    int inicio = 0;
    int fim = tamanho - 1;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (vetor[meio] == chave) {
            return meio;  
        } else if (vetor[meio] < chave) {
            inicio = meio + 1;  
        } else {
            fim = meio - 1;     
        }
    }

    return -1;  
}
int main() {
    int numeros[] = {2, 4, 6, 8, 10, 12, 14};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);
    int chave = 10;

    int resultado = busca_binaria(numeros, tamanho, chave);

    if (resultado != -1) {
        printf("Elemento %d encontrado na posição %d.\n", chave, resultado);
    } else {
        printf("Elemento %d não encontrado.\n", chave);
    }

    return 0;
}
