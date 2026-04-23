
// Crie um programa onde o usuário digita números um por um.
// Cada número digitado deve ser adicionado ao vetor usando realloc.
// Quando o número -1 for digitado, pare. Mostre quantos números foram digitados e quais foram.



#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    printf("\nEscreva numeros\nquando quiser parar escreva \"-1\"\n\n");

    int num, quantidade = 0;
    int *lista = NULL, *temp;

    while (true) {
        scanf("%i", &num);

        if (num == -1) {
            break;
        }

        quantidade++;

        temp = realloc(lista, quantidade * sizeof(int));

        if (temp == NULL) {
            printf("\n\nErro ao realocar memória");
            return 1;
        }

        lista = temp;
        lista[quantidade - 1] = num;
    }

    printf("\n\nLista que você digitou :\n");

    for (int i = 0; i < quantidade; i++) {
        printf("\n%i", lista[i]);
    }

    free(lista);

    return 0;
}



