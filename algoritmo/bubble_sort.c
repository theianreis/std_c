#include <stdio.h>

// Função para realizar uma única passagem do bubble sort
void bubblePass(int arr[], int n, int i) {
    if (i < n - 1) {
        if (arr[i] > arr[i + 1]) {
            // troca os elementos
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
        bubblePass(arr, n, i + 1);
    } else {
        return;
    }
}

// Função recursiva para aplicar várias passagens
void bubbleSort(int arr[], int n) {
    if (n > 1) {
        bubblePass(arr, n, 0);
        bubbleSort(arr, n - 1);
    } else {
        return;
    }
}

void printArray(int arr[], int n) {
    if (n > 0) {
        printf("%d ", arr[0]);
        printArray(arr + 1, n - 1);
    } else {
        printf("\n");
    }
}

int main() {
    int arr[] = {5, 1, 4, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array antes da ordenação:\n");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Array após a ordenação:\n");
    printArray(arr, n);

    return 0;
}