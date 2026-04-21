
// Use strcat() para juntar os dois e mostrar o nome completo.

#include <stdio.h>
#include <string.h>

int main() {
    char nome1[50];
    char nome2[50];

    printf("qual o seu nome?: \n");
    fgets( nome1, sizeof(nome1), stdin);
    nome1[strcspn(nome1, "\n")] = ' ';

    printf("qual o seu sobrenome : \n");
    fgets( nome2, sizeof(nome2), stdin);
    nome2[strcspn(nome2, "\n")] = '\0';

    strcat(nome1, nome2);

    printf("%s", nome1);

    return 0;
}