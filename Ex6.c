#include <stdio.h>

int buscaBinRecursiva(int arr[], int inicio, int fim, int alvo) {
    if (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2;

        if (arr[meio] == alvo) {
            return meio;
        }

        if (arr[meio] < alvo) {
            return buscaBinRecursiva(arr, meio + 1, fim, alvo);
        }

        return buscaBinRecursiva(arr, inicio, meio - 1, alvo);
    }

    return -1; // Se o elemento não estiver presente no array
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    int alvo = 10;
    int resultado = buscaBinRecursiva(arr, 0, tamanho - 1, alvo);
    if (resultado != -1) {
        printf("Elemento encontrado na posição %d\n", resultado);
    } else {
        printf("Elemento não encontrado\n");
    }
    return 0;
}