
// Crie um array com 6 inteiros e inverta seus valores trocando vetor[0] com vetor[5], vetor[1] com vetor[4], etc.

#include <stdio.h>

int main() {
    int lista[5] = {5, 6, 7, 8, 9};
    int listaAssistente[5];
    int listaLength = sizeof(lista) / sizeof(lista[0]);

    for (int i = 0; i < listaLength; i++) {
        listaAssistente[i] = lista[listaLength - i - 1];
    }

    for (int i = 0; i < listaLength; i++) {
        lista[i] = listaAssistente[i];
    }

    for (int i = 0; i < listaLength; i++) {
        printf("\n%i", lista[i]);
    }

    return 0;
}


