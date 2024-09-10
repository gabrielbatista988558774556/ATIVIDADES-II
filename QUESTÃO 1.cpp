#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char palavra[11], letra, palavra_atual[11];
    int vidas, acertos = 0;

    printf("Informe a palavra secreta (até 10 letras): ");
    scanf("%s", palavra);

    int tam = strlen(palavra);
    vidas = tam + 2;

    // Inicializa a palavra atual com '_'
    for (int i = 0; i < tam; i++) {
        palavra_atual[i] = '_';
    }
    palavra_atual[tam] = '\0';

    while (vidas > 0 && acertos < tam) {
        printf("Palavra: %s\n", palavra_atual);
        printf("Vidas restantes: %d\nDigite uma letra: ", vidas);
        scanf(" %c", &letra);

        letra = tolower(letra);
        int achou = 0;

        for (int i = 0; i < tam; i++) {
            if (tolower(palavra[i]) == letra && palavra_atual[i] == '_') {
                palavra_atual[i] = palavra[i];
                acertos++;
                achou = 1;
            }
        }

        if (!achou) vidas--;
    }

    if (acertos == tam)
        printf("Parabéns! Você venceu! A palavra era: %s\n", palavra);
    else
        printf("Você perdeu! A palavra era: %s\n", palavra);

    return 0;
}