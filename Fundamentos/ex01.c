
// Crie um programa com uma variável int idade = 25; e mostre na tela o valor dela e o endereço usando &.

#include <stdio.h>

int main() {
    int idade = 25;
    printf("\nidade : %i\nlocal na memória : %p", idade, &idade);
}

