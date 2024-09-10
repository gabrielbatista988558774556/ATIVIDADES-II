#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TOTAL_CRIANCAS 50
#define NOTA_MAX 5

int main() {
    int contagem[NOTA_MAX] = {0};
    srand(time(NULL));

    for (int i = 0; i < TOTAL_CRIANCAS; i++) {
        contagem[(rand() % NOTA_MAX)]++;
    }

    for (int i = 0; i < NOTA_MAX; i++) {
        printf("Nota %d: %d vezes\n", i + 1, contagem[i]);
    }

    return 0;
}