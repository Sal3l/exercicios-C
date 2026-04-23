
// Crie um vetor de N floats usando malloc.
// Peça para o usuário preencher com notas e calcule a média.

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

    printf("Prencha a lista com suas notas\n");

    for (int i = 0; i < tamanho; i++) {
        int temp = 0;
        printf("%iº : ", i + 1);
        scanf("%i", (lista + i));
    }

    float soma = 0;

    for (int i = 0; i < tamanho; i++) {
        soma += *(lista + i);
    }

    printf("a média das suas notas é %.2f", soma / tamanho);

    return 0;
}