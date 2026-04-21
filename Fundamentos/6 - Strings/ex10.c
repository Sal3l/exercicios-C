
// use toupper() e tolower() da <ctype.h>

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char nome[50];

    printf("qual o seu nome completo?: \n");
    fgets( nome, sizeof(nome), stdin);

    char nomeMaiusculo[50];

    for ( int i = 0; i < strlen(nome); i++) {
        nomeMaiusculo[i] = toupper(nome[i]);
    }

    printf("nome em maiusculo : %s", nomeMaiusculo);

    return 0;
}