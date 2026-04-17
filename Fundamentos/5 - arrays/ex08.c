
// Peça ao usuário um número e multiplique todos os elementos do vetor por ele. Mostre o novo vetor.

#include <stdio.h>

int main() {
    int lista[5] = {2, 4, 8, 16, 32};
    int listaLength = sizeof(lista) / sizeof(lista[0]);
    int num = 0;

    printf("escolha um valor para multiplicar todos itens da lista\n");
    scanf("%i", &num);

    for (int i = 0; i < listaLength; i++) {
        lista[i] = lista[i] * num;
    }

    for (int i = 0; i < listaLength; i++) {
        printf("%i, ", lista[i]);
    }

    return 0;
}
