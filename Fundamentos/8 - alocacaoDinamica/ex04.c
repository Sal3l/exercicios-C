
// Peça ao usuário um número N, aloque um vetor de N inteiros e preencha com valores aleatórios entre 1 e 100.
// Depois, mostre os valores pares.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char **nomes;
    int tamanho;
    char espNome[1000];

    printf("quantos nomes você pretende colocar? : ");
    scanf("%i", &tamanho);
    getchar();

    nomes = (char **)malloc(tamanho * sizeof(char *));

    if (nomes == NULL) {
        printf("\n\nerro ao alocar memória");
        return 1;
    }

    for (int i = 0; i < tamanho; i++) {
        printf("\nqual o %iº nome?\n", i + 1);

        fgets(espNome, sizeof(espNome), stdin);
        espNome[strcspn(espNome, "\n")] = '\0';

        nomes[i] = (char *)malloc((strlen(espNome) + 1) * sizeof(char));

        if (nomes[i] == NULL) {
            printf("\n\nerro ao alocar memória, vtmnc kkkkkkkkkkkk");
            return 1;
        }

        strcpy(nomes[i], espNome);
    }

    printf("\nnomes : \n");

    for (int i = 0; i < tamanho; i++) {
        printf("\n%iº : %s", i + 1, nomes[i]);
    }

    return 0;
}