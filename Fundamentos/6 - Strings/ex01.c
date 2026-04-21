
// Use scanf("%s", nome) (sem espaços no nome)

#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];

    printf("qual o seu nome?: \n");
    scanf("%s", nome);

    printf("%s", nome);

    return 0;
}