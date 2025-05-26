#include <stdio.h>

// Função de busca binária
int busca_binaria(int vetor[], int tamanho, int chave) {
    int inicio = 0;
    int fim = tamanho - 1;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (vetor[meio] == chave) {
            return meio;  // Encontrado
        } else if (vetor[meio] < chave) {
            inicio = meio + 1;  // Busca na metade direita
        } else {
            fim = meio - 1;     // Busca na metade esquerda
        }
    }

    return -1;  // Não encontrado
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
