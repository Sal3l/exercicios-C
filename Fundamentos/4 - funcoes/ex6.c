
// Crie uma função void apresentar(char nome[], int idade) que imprime:
// "Olá, [nome]! Você tem [idade] anos."
// No main, peça essas informações ao usuário e chame a função.

#include <stdio.h>

void apresentação(char inicial, int idade) {
    printf("\nOlá, %c! Você tem %i anos.", inicial, idade);
}

int main() {
    int idade = 0;
    char inicial = 'a';

    printf("qual a inicial do seu nome?\n");
    scanf("%c", &inicial);

    printf("qual a sua idade?\n");
    scanf("%i", &idade);

    apresentação(inicial, idade);

    return 0;
}