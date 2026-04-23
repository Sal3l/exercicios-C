
// Crie um vetor de N inteiros com malloc.
// Crie um segundo vetor que seja o inverso do primeiro (mesmos elementos, mas ordem invertida).
// Exiba os dois.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main() {
    int *lista1;
    int *lista2;

    lista1 = (int *)malloc(10 * sizeof(int));
    lista2 = (int *)malloc(10 * sizeof(int));

    srand(time(NULL));

    for (int i = 0; i < 10; i++) {
        *(lista1 + i) = (rand() % 100) + 1;
    }

    for (int i = 0; i < 10; i++) {
        *(lista2 + i) = *(lista1 + 9 - i);
    }

    for (int i = 0; i < 10; i++) {
        printf("\n%iº : %i - %i", i + 1, *(lista1 + i), *(lista2 + i));
    }

    free(lista1);
    free(lista2);

    return 0;
}

