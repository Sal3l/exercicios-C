
// Leia uma palavra e diga se ela é um palíndromo

#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    char nomeAuxiliar[50];

    printf("qual o seu nome completo?: \n");
    fgets( nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    for (int i = 0; i < strlen(nome); i++) {
        nomeAuxiliar[i] = nome[strlen(nome) - i - 1];
    }
    nomeAuxiliar[strcspn(nomeAuxiliar, "\n")] = '\0';

    if (strcmp(nome, nomeAuxiliar) == 0) {
        printf("%s é palindromo", nome);
    } else {
        printf("%s não é palindromo", nome);
    }

    return 0;
}

