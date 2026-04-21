
// Crie uma função que receba uma string como ponteiro e transforme todas as letras em maiúsculas (use toupper() e ponteiros).

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void nomeMaiusculo(char *ponteiro) {
    while (*ponteiro != '\0') {
        *ponteiro = toupper(*ponteiro);
        ponteiro++;
    }
}

int main() {
    char nome[50];

    printf("qual o seu nome completo?: \n");
    fgets(nome, sizeof(nome), stdin);

    nome[strcspn(nome, "\n")] = '\0';

    char *nome1 = &nome[0];

    nomeMaiusculo(nome1);

    printf("nome em maiusculo : %s", nome);

    return 0;
}

