
// Mostre o conteúdo do array do último para o primeiro elemento.

#include <stdio.h>

int main() {
    int lista[5];
    int listaLength = sizeof(lista) / sizeof(lista[0]);

    printf("%i", listaLength);

    for (int i = 0; i < listaLength; i++) {
        printf("\nescreva o valor do %iº numero : \n", i + 1);
        scanf("%i", &lista[i]);
    }

    for (int i = listaLength; i > 0; i--) {
        printf("%i\n", lista[i - 1]);
    }

    return 0;
}