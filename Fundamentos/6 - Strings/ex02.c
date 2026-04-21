
// Use fgets(nome, tamanho, stdin);
// Dica: char nome[50];

#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    int tamanho = 0;

    printf("qual o seu nome?: \n");
    fgets( nome, sizeof(nome), stdin);

    printf("%s", nome);

    return 0;
}