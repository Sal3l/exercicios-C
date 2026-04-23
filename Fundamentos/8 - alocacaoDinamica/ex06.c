
// Alocar um vetor de N inteiros.
// Depois que os valores forem preenchidos, encontre o maior e o menor elemento.
// Libere a memória ao final.


#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int *lista;

    lista = (int *)malloc(100 * sizeof(int));

    if (lista == NULL) {
        printf("Erro");
        return 1;
    }

    srand(time(NULL));

    for (int i = 0; i < 100; i++) {
        *(lista + i) = (rand() % 100) + 1;
    }

    int maior = *(lista);
    int menor = *(lista);

    for (int i = 0; i < 100; i++) {
        if (*(lista + i) > maior) {
            maior = *(lista + i);
        } else {
            if (*(lista + i) < menor) {
                menor = *(lista + i);
            }
        }
    }

    printf("\n\nmiaor : %i\nmenor : %i", maior, menor);

    free(lista);
    return 0;
}