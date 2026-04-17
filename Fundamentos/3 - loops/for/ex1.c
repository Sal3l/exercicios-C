
// Peça um número e mostre a tabuada dele de 1 a 10 usando for

#include <stdio.h>

int main() {
    int num;

    printf("\nEscolha um numero para a tabuada\n");
    scanf("%i", &num);

    for (int i = 0; i < 10; i++) {
        printf("%i * %i = %i\n", num, i + 1, num * (i + 1));
    }
}

