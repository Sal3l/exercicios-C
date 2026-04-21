
// Crie uma função int compararPalindromo(char texto[]) que verifica se uma palavra é palíndromo.
// Use ela no main e peça várias palavras ao usuário.

#include <stdio.h>
#include <string.h>

int compararPalindromo(char texto[], int tamanho) {
    int valor = 0;
    char palavraAssistente[tamanho];

    strcpy(palavraAssistente, texto);

    for (int i = 0; i < tamanho; i++) {
        palavraAssistente[i] = texto[tamanho - i - 1];
    }
    palavraAssistente[tamanho] = '\0';

    if (strcmp(texto, palavraAssistente) == 0) {
        valor = 1;
    }

    return valor;
}

int main() {
    char palavra[20];

    printf("Escreva uma palavra : \n");
    fgets(palavra, sizeof(palavra), stdin);

    palavra[strcspn(palavra, "\n")] = '\0';

    int palindromo = compararPalindromo(palavra, strlen(palavra));

    if (palindromo == 1) {
        printf("a palavra %s é palindromo", palavra);
    } else {
        printf("a palavra %s não é palindromo", palavra);
    }
}

