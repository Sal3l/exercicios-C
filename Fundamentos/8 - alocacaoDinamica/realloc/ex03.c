
// Crie um programa que use um char ** para armazenar nomes. Comece com espaço para 2 nomes.
// A cada novo nome, use realloc para aumentar o espaço do vetor de ponteiros.
// O usuário pode digitar quantos nomes quiser até digitar "sair".


#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char **nomes;
    nomes = (char **)malloc(2 * sizeof(char *));
    char espNome[1000];

    if (nomes == NULL) {
        printf("\n\nerro ao alocar memória");
        return 1;
    }

    printf("\n\nAdicione quantos nomes quiser \nou escreva \"sair\" para visualizar os nomes que escreveu\n");

    int i = 0;
    char **temp;

    while (true) {
        printf("\nqual nome você deseja inserir? (ou escreva sair)\n");

        fgets(espNome, sizeof(espNome), stdin);
        espNome[strcspn(espNome, "\n")] = '\0';

        if (strcmp(espNome, "sair") == 0) {
            break;
        }

        nomes[i] = (char *)malloc((strlen(espNome) + 1) * sizeof(char));

        if (nomes[i] == NULL) {
            printf("\n\nErro ao alocar memória");
            return 1;
        }

        strcpy(nomes[i], espNome);
        i += 1;

        temp = realloc(nomes, (2 + i) * sizeof(char *));

        if (temp == NULL) {
            printf("\n\nErro ao realocar memória");
            return 1;
        }

        nomes = temp;
    }

    int tamanho = i;

    printf("\nNomes :\n");

    for (int i = 0; i < tamanho; i++) {
        printf("\n %s", *(nomes + i));
    }

    for (int i = 0; i < tamanho; i++) {
        free(nomes[i]);
    }

    free(nomes);

    return 0;
}