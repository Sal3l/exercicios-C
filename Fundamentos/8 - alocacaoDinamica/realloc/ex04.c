
// Peça ao usuário uma quantidade de números e use malloc para armazená-los.
// Depois, remova os números pares da lista.
// Para isso, crie uma nova lista com realloc conforme encontra os ímpares.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num;
    int *lista;

    printf("escolha uma quantidade de numeros :\n");
    scanf("%i", &num);

    lista = (int *)malloc(num * sizeof(int));

    if (lista == NULL) {
        printf("\n\nErro ao alocar memoria");
        return 1;
    }

    srand(time(NULL));

    for (int i = 0; i < num; i++) {
        lista[i] = (rand() % 100) + 1;
    }

    printf("\nvalores da lista :");

    for (int i = 0; i < num; i++) {
        printf("\n%i", lista[i]);
    }

    int qtImpares = 0;
    int *impares = NULL;
    int *temp;

    for (int i = 0; i < num; i++) {
        if (*(lista + i) % 2 != 0) {
            qtImpares++;

            temp = realloc(impares, qtImpares * sizeof(int));

            if (temp == NULL) {
                printf("\n\nerro ao realocar memoria | abc");
                return 1;
            }

            impares = temp;
            impares[qtImpares - 1] = lista[i];
        }
    }

    printf("\n\nLista filtrada por impares : ");

    for (int i = 0; i < qtImpares; i++) {
        printf("\n%i", impares[i]);
    }

    free(lista);
    free(impares);

    return 0;
}

