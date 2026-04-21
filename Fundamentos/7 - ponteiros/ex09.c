
// Peça ao usuário para preencher um array de 5 inteiros. Use um ponteiro para multiplicar todos os valores por 2 e mostre o array final.

#include <stdio.h>

int main() {
    int lista[5];
    int *pLista = lista;

    for (int i = 0; i < 5; i++) {
        printf("escolha um numero inteiro : \n");
        scanf("%i", &lista[i]);
        pLista[i] *= 2;
    }

    for (int i = 0; i < 5; i++) {
        printf("\nnumero: %i", lista[i]);
    }

    return 0;
}