
// Peça ao usuário um número N e use malloc para criar um vetor de N inteiros.
// Preencha o vetor com números fornecidos pelo usuário e imprima todos eles.
// Por fim, libere a memória com free.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *lista;
    int tamanho = 0;

    printf("tamanho da lista : ");
    scanf("%i", &tamanho);

    lista = (int *)malloc(tamanho * sizeof(int));

    if (lista == NULL) {
        printf("\n\nFalha ao alocar memória...");
        return 1;
    }

    printf("Prencha os valores da lista\n");

    for (int i = 0; i < tamanho; i++) {
        int temp = 0;
        printf("%iº : ", i + 1);
        scanf("%i", (lista + i));
    }

    for (int i = 0; i < tamanho; i++) {
        printf("\n%iº numero : %i", i + 1, *(lista + i));
    }

    free(lista);
    return 0;
}