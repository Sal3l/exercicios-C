
// Peça uma palavra ao usuário. Inverta a string usando apenas ponteiros (sem strcpy, strlen, nem índices).

#include <stdio.h>
#include <string.h>

int main() {
    char palavra[20];
    char *pPalavra = &palavra[0];

    printf("Escreva uma palavra : \n");
    fgets(palavra, sizeof(palavra), stdin);

    palavra[strcspn(palavra, "\n")] = '\0';

    int tamanho = 0;
    while (palavra[tamanho] != '\0') {
        tamanho++;
    }

    char palavraAssistente[20];
    int tamanho2 = 0;

    palavraAssistente[tamanho + 1] = '\0';

    while (*pPalavra != '\0') {
        palavraAssistente[tamanho - tamanho2 - 1] = *pPalavra;
        tamanho2++;
        pPalavra++;
    }

    printf("pala: %s", palavraAssistente);

    return 0;
}

