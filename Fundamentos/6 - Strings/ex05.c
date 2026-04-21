
// Peça dois nomes e diga se eles são iguais ou diferentes usando strcmp.

#include <stdio.h>
#include <string.h>

int main() {
    char nome1[50];
    int tamanho = 0;
    char nome2[50];

    printf("qual o seu nome?: \n");
    fgets( nome1, sizeof(nome1), stdin);
    nome1[strcspn(nome1, "\n")] = '\0';

    printf("escreva um segundo nome : \n");
    fgets( nome2, sizeof(nome2), stdin);
    nome2[strcspn(nome2, "\n")] = '\0';

    if (strcmp(nome1, nome2) == 0) {
        printf("%s e %s são iguais", nome1, nome2);
    } else {
        printf("%s e %s são diferentes", nome1, nome2);
    }

    return 0;
}