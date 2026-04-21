
// Crie uma int, uma float, e uma char. Mostre os endereços de memória de cada uma usando &.

#include <stdio.h>

int main() {
    int idade = 25;
    float quebrado = 3.14;
    char letra = 'a';

    printf("\nidade : %p\nquebrado : %p\nletra : %p", &idade, &quebrado, &letra);
}