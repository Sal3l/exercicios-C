
// Peça um número inteiro e mostre o fatorial dele usando for.
// (ex: 5! = 5 × 4 × 3 × 2 × 1 = 120)

#include <stdio.h>

int main() {
    int num;
    int multiplicacao = 1;

    printf("calcular fatoria de um numero\n");
    scanf("%i", &num);

    for (int i = num; i > 0; i--) {
        multiplicacao *= i;
        printf("\n%i", multiplicacao);
    }
}

