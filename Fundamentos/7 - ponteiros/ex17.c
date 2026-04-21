

// Crie uma função que recebe um array e seu tamanho, e retorna um ponteiro para o maior valor presente.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void maior(int *ponteiro, int tamanho) {
    int *maior = ponteiro;

    for (int i = 0; i < tamanho; i++) {
        if (ponteiro[i] > *maior) {
            *maior = ponteiro[i];
        }
    }

    printf("maior : %i", *maior);
}

int main() {
    int lista[5] = { 3, 5, 4, 7, 1 };
    int tamanho = sizeof(lista) / sizeof(lista[0]);
    int *numero = &lista[0];

    maior(numero, tamanho);
}
    