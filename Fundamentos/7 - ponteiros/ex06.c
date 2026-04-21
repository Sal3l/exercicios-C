
// Use um ponteiro em conjunto com scanf para armazenar um número em uma variável sem passar a variável diretamente.

#include <stdio.h>

int main() {
    int idade = 25;
    int *pIdade = &idade;

    printf("qual sua idade : \n");
    scanf("%d", pIdade);

    printf("\nentão a sua idade é %i", idade);
}