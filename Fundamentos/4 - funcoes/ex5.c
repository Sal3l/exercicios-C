
// Crie uma função void linha(int n) que imprime uma linha com n asteriscos.
// Exemplo: se n = 5, imprime *****

#include <stdio.h>

void linha(int num) {
    for (int i = num; i > 0; i--) {
        printf("*");
    }
}

int main() {
    int numero;

    printf("quantos asteriscos você deseja que a linha tenha?\n");
    scanf("%i", &numero);

    linha(numero);

    return 0;
}