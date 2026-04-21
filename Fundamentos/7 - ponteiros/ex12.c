
// Crie uma função void preencher(int *array, int tamanho) que preenche um array com valores informados pelo usuário.

#include <stdio.h>
#include <string.h>

void preencher(char array[], int tamanho) {
    char letra;

    for (int i = 0; i < tamanho && letra != '*'; i++) {
        printf("letra: ");
        scanf(" %c", &letra);

        if (letra == '*') {
            array[i] = '\0';
        } else {
            array[i] = letra;
        }
    }

    printf("\nfrase : %s", array);
}

int main() {
    char frase[100];
    int tamanho = 100;

    printf("pense em algo com no maximo 99 letras \npreencha uma de cada vez\nuse \"*\" para terminar a frase\n\n");

    preencher(frase, tamanho);

    return 0;
}