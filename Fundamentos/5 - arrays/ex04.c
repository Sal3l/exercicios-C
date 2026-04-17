
// Conte e exiba quantos números pares e ímpares existem no vetor.

#include <stdio.h>

int main() {
    int lista[5];
    int listaLength = sizeof(lista) / sizeof(lista[0]);
    int pares = 0;

    for (int i = 0; i < listaLength; i++) {
        printf("\nescreva o valor do %iº numero : \n", i + 1);
        scanf("%i", &lista[i]);
    }

    for (int i = 0; i < listaLength; i++) {
        if (lista[i] % 2 == 0) {
            pares += 1;
        }
    }

    printf("\na lista possui %i numeros pares e %i numeros impares", pares, listaLength - pares);
}