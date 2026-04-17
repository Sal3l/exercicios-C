
// Use um for para somar todos os números pares de 1 a 100 e exiba o resultado

#include <stdio.h>

int main() {
    int soma = 0;

    for (int i = 0; i < 100; i += 2) {
        soma += i;
    }

    printf("o resultado deu : %i", soma);
}
