#include <stdio.h>

int busca_binaria(int arr[], int tamanho, int chave) {
    int esq = 0, dir = tamanho - 1;

    while (esq <= dir) {
        int meio = (esq + dir) / 2;
        if (arr[meio] == chave) return meio;
        if (arr[meio] < chave) esq = meio + 1;
        else dir = meio - 1;
    }

    return -1;
}

int main() {
    int primos[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    int numero;

    printf("Digite um número de 1 a 100: ");
    scanf("%d", &numero);

    int resultado = busca_binaria(primos, sizeof(primos) / sizeof(primos[0]), numero);

    if (resultado != -1) printf("O número %d é primo e está na posição %d.\n", numero, resultado);
    else printf("O número %d não é primo.\n", numero);

    return 0;
}