
// Use strlen()
// Exiba quantos caracteres tem o nome (sem contar o \0)

#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    int tamanho = 0;

    printf("qual o seu nome?: \n");
    fgets( nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    tamanho = strlen(nome);

    printf("nome : %s, tamanho : %i", nome, tamanho);

    return 0;
}