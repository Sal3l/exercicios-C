
// Com o array do exercício anterior, mostre a soma de todos os valores

#include <stdio.h>

int main() {
    int lista[5];
    int soma = 0;
    int listaLength = sizeof(lista) / sizeof(lista[0]);

    for (int i = 0; i < listaLength; i++) {
        printf("\nescreva o valor do %iº numero : \n", i + 1);
        scanf("%i", &lista[i]);
    }

    printf("\nos valores da lista são : \n\n");

    for (int i = 0; i < listaLength; i++) {
        printf("%i\n", lista[i]);
        soma += lista[i];
    }

    printf("\nvalor total da soma : \n%i", soma);

    return 0;
}