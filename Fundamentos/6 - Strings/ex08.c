
// Peça um nome e exiba ele de trás pra frente
// Ex: ana → ana
// Ex: joao → oaoj

#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    char nomeAuxiliar[50];

    printf("qual o seu nome completo?: \n");
    fgets( nome, sizeof(nome), stdin);

    for (int i = 0; i < strlen(nome) - 1; i++) {
        nomeAuxiliar[i] = nome[ strlen(nome) - i - 2];
    }

    printf("nome invertido : %s", nomeAuxiliar);

    return 0;
}

