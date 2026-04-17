
// Crie um array de 5 inteiros. Peça ao usuário que digite os valores e depois exiba todos eles.

#include <stdio.h>

int main() {
    int lista[5];
    int listaLength = sizeof(lista) / sizeof(lista[0]);

    for (int i = 0; i < listaLength; i++) {
        printf("\nescreva o valor do %iº numero : \n", i + 1);
        scanf("%i", &lista[i]);
    }

    printf("os valores da lista são : \n");

    for (int i = 0; i < listaLength; i++) {
        printf("%i\n", lista[i]);
    }

    return 0;
}