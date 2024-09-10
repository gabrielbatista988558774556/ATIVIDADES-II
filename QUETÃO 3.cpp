#include <stdio.h>

#define TOTAL_CONTAS 100

int busca_binaria(int contas[], int tamanho, int conta_procurada, int *comparacoes) {
    int esq = 0, dir = tamanho - 1;
    *comparacoes = 0;

    while (esq <= dir) {
        (*comparacoes)++;
        int meio = (esq + dir) / 2;

        if (contas[meio] == conta_procurada) return meio;
        if (contas[meio] < conta_procurada) esq = meio + 1;
        else dir = meio - 1;
    }

    return -1;
}

int main() {
    int contas[TOTAL_CONTAS], conta_procurada, comparacoes;

    for (int i = 0; i < TOTAL_CONTAS; i++) contas[i] = i + 1;

    printf("Digite o número da conta a ser procurada: ");
    scanf("%d", &conta_procurada);

    int resultado = busca_binaria(contas, TOTAL_CONTAS, conta_procurada, &comparacoes);

    if (resultado != -1) printf("Conta %d encontrada na posição %d.\n", conta_procurada, resultado);
    else printf("Conta %d não encontrada.\n", conta_procurada);

    printf("Número de comparações: %d\n", comparacoes);

    return 0;
}