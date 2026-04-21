
// Faça uma função void inverterString() que recebe uma string e preenche outra com a versão invertida.
// No main, peça ao usuário uma palavra e imprima ela invertida.

#include <stdio.h>
#include <string.h>

void inverterString(char original[], int tamanho) {
    char fraseAssistente[tamanho];

    strcpy(fraseAssistente, original);

    for (int i = 0; i < tamanho; i++) {
        fraseAssistente[i] = original[tamanho - i - 1];
    }
    fraseAssistente[tamanho] = '\0';

    printf("frase invertida: %s", fraseAssistente);
}

int main() {
    char frase[50];

    printf("escreva uma frase : \n");
    fgets(frase, sizeof(frase), stdin);

    frase[strcspn(frase, "\n")] = '\0';

    inverterString(frase, strlen(frase));

    return 0;
}