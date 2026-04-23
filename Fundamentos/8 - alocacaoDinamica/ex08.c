
// Solicite ao usuário quantas palavras deseja armazenar.
// Para cada palavra, use malloc para alocar espaço suficiente (com base em strlen).
// Depois mostre as palavras ao contrário (uma a uma).
// Libere tudo com free.


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

    printf("\nNomes ao contrário:\n");

    for (int i = 0; i < tamanho; i++) {
        printf("%dº: ", i + 1);

        for (int j = strlen(nomes[i]) - 1; j >= 0; j--) {
            printf("%c", nomes[i][j]);
        }

        printf("\n");
    }

    for (int i = 0; i < tamanho; i++) {
        free(nomes[i]);
    }

    free(nomes);

    return 0;
}