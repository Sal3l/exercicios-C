

//Peça ao usuário um número N, aloque um vetor de N inteiros e preencha com valores aleatórios entre 1 e 100.
// Depois, mostre os valores pares.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int *lista;
    int tamanho = 0;

    printf("Tamanho da lista : ");
    scanf("%i", &tamanho);

    lista = (int *)malloc(tamanho * sizeof(int));

    if (lista == NULL) {
        printf("Erro");
        return 1;
    }

    srand(time(NULL));

    for (int i = 0; i < tamanho; i++) {
        *(lista + i) = (rand() % 100) + 1;
    }

    int num;

    printf("qual numero você acha que existe na lista? : ");
    scanf("%i", &num);

    int controle = 0;

    for (int i = 0; i < tamanho && controle != 1; i++) {
        if (*(lista + i) == num) {
            printf("Esse numero existe na lista");
            controle = 1;
        }
    }

    if (controle != 1) {
        printf("Esse numero não existe na lista");
    }

    free(lista);
    return 0;
}