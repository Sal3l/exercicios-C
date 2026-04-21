
// Crie uma função que receba um ponteiro para um array de float e calcule a média dos valores.

#include <stdio.h>
#include <string.h>

void media(float array[], int tamanho) {
    float soma = 0;

    for (int i = 0; i < tamanho; i++) {
        soma += array[i];
    }

    printf("a média dos valores é : %.2f", soma / 5.0);
}

int main() {
    float lista[5] = { 5, 6, 7, 8, 9 };

    media(lista, 5);

    return 0;
}

