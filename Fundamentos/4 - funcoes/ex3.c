
// Crie uma função int ehPar(int num) que retorna 1 se o número for par e 0 caso contrário.
// No main, peça um número e diga se é par ou ímpar usando a função.

#include <stdio.h>

int parimpar(int num) {
    if (num % 2 == 1) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num = 0;

    printf("escreva um numero inteiro: \n");
    scanf("%i", &num);

    int resposta = parimpar(num);

    if (resposta == 0) {
        printf("o numero é par");
    } else if (resposta == 1) {
        printf("o numero é impar");
    }

    return 0;
}