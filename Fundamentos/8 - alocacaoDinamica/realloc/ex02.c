

// Crie uma lista de n números aleatórios (usando rand()).
// Mostre os números, e depois peça ao usuário um novo tamanho menor.
// Use realloc para reduzir o tamanho do vetor e exiba os números restantes.


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tamanho;
    int *lista;

    printf("Qual o tamanho da lista que você quer? : ");
    scanf("%i", &tamanho);

    lista = (int *)malloc(tamanho * sizeof(int));

    if (lista == NULL) {
        printf("\n\nErro ao alocar memória");
        return 1;
    }

    srand(time(NULL));

    for (int i = 0; i < tamanho; i++) {
        *(lista + i) = (rand() % 100) + 1;
    }

    for (int i = 0; i < tamanho; i++) {
        printf("\n%iº numero : %i", i + 1, *(lista + i));
    }

    int novoTamanho;

    printf("\n\nquer diminuir a lista para quantos numeros? ");
    scanf("%i", &novoTamanho);

    int *temp;
    temp = realloc(lista, novoTamanho * sizeof(int));

    if (temp == NULL) {
        printf("\n\nErro ao realocar memória");
        return 1;
    }

    lista = temp;

    for (int i = 0; i < novoTamanho; i++) {
        printf("\n%iº numero : %i", i + 1, *(lista + i));
    }

    free(lista);

    return 0;
}