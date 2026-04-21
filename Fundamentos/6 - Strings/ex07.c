
// Peça uma letra e percorra a string para contar quantas vezes ela aparece.

#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    char letra;
    int contagem = 0;

    printf("qual o seu nome completo?: \n");
    fgets( nome, sizeof(nome), stdin);

    printf("escolha uma letra para contar: \n");
    scanf("%c", &letra);

    for (int i = 0; i < sizeof(nome) / sizeof(nome[0]); i++) {
        if (nome[i] == letra) {
            contagem += 1;
        }
    }

    printf("quantas vezes apareceu : %i", contagem);

    return 0;
}