
// Mostre qual é o maior valor e qual é o menor valor do array.

#include <stdio.h>

int main() {
    int lista[5];
    int listaLength = sizeof(lista) / sizeof(lista[0]);

    for (int i = 0; i < listaLength; i++) {
        printf("\nescreva o valor do %iº numero : \n", i + 1);
        scanf("%i", &lista[i]);
    }

    int maior = lista[0];
    int menor = lista[0];

    for (int i = 0; i < listaLength; i++) {
        if (lista[i] > maior) {
            maior = lista[i];
        } else if (lista[i] < menor) {
            menor = lista[i];
        }
    }

    printf("\no maior valor é : %i\no menor valor é : %i", maior, menor);
}