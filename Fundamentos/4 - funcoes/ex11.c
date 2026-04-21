
// Escreva uma função int contarCaracter(char texto[], char letra) que conte quantas vezes uma letra aparece numa string.
// No main, o usuário digita uma frase, e depois uma letra para buscar.

#include <stdio.h>
#include <string.h>

int contarCaracter(char texto[], char letra) {
    int quantidade = 0;

    for (int i = 0; i < strlen(texto); i++) {
        if (texto[i] == letra) {
            quantidade += 1;
        }
    }

    return quantidade;
}

int main() {
    char frase[100];
    char letra;

    printf("formule uma frase : \n");
    fgets(frase, sizeof(frase), stdin);

    frase[strcspn(frase, "\n")] = '\0';

    printf("escolha uma letra para contar : \n");
    scanf("%c", &letra);

    int quantidade = 0;
    quantidade = contarCaracter(frase, letra);

    printf("\na letra \"%c\" aparece %i vezes na frase : \n%s", letra, quantidade, frase);

    return 0;
}