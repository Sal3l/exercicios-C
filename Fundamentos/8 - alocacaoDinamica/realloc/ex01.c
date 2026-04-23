
// Peça ao usuário quantos números ele quer inserir inicialmente.
// Depois, permita que ele decida se quer inserir mais números.
// Toda vez que quiser adicionar mais, use realloc para aumentar o tamanho da lista.

#include <stdio.h>
#include <stdlib.h>

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

    for (int i = 0; i < tamanho; i++) {
        *(lista + i) = i + 1;
    }

    for (int i = 0; i < tamanho; i++) {
        printf("\n%iº numero : %i", i + 1, *(lista + i));
    }

    int novoTamanho;

    printf("\n\nquer aumentar a lista para quantos numeros? ");
    scanf("%i", &novoTamanho);

    int *temp;
    temp = realloc(lista, novoTamanho * sizeof(int));

    if (temp == NULL) {
        printf("\n\nErro ao realocar memória");
        return 1;
    }

    lista = temp;

    for (int i = tamanho; i < novoTamanho; i++) {
        *(lista + i) = i + 1;
    }

    for (int i = 0; i < novoTamanho; i++) {
        printf("\n%iº numero : %i", i + 1, *(lista + i));
    }

    free(lista);

    return 0;
}


