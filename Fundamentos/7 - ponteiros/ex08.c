
// Crie um programa que declare um array de inteiros e use um ponteiro para percorrer e imprimir os valores.

#include <stdio.h>

int main() {
    int lista[5] = { 5, 4, 3, 2, 1 };
    int *pLista = lista;

    for (int i = 0; i < 5; i++) {
        printf("numero da lista : %i\n", pLista[i]);
    }

    return 0;
}