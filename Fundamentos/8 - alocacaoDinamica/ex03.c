
// Peça ao usuário um número N, aloque um vetor de N inteiros e preencha com valores aleatórios entre 1 e 100.
// Depois, mostre os valores pares.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int *lista;
    int tamanho;

    printf("qual o tamanho da lista? : ");
    scanf("%i", &tamanho);

    lista = (int *) malloc(tamanho * sizeof(int));

    srand(time(NULL));

    for (int i = 0; i < tamanho; i++) {
        *(lista + i) = (rand() % 100) + 1;
    }

    printf("\nvalores pares : \n");

    for (int i = 0; i < tamanho; i++) {
        if ((*(lista + i) % 2) == 0) {
            printf("\n%i", *(lista + i));
        }
    }

    return 0;
}