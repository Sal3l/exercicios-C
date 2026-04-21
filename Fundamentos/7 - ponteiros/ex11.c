
// Peça uma string ao usuário e conte quantas letras ‘a’ ela tem, usando ponteiros ao invés de índices.

#include <stdio.h>
#include <string.h>

int main() {
    char texto[100];

    printf("\nescreva uma frase : \n");
    fgets(texto, sizeof(texto), stdin);

    char letra;
    printf("\nescolha uma letra : \n");
    scanf(" %c", &letra);

    char *pTexto = texto;

    texto[strcspn(texto, "\n")] = '\0';

    int contagem = 0;
    int tamanho = strlen(texto);

    while (*pTexto != '\0') {
        if (*pTexto == letra) {
            contagem++;
        }
        pTexto++;
    }

    printf("\nexistem %i letras \"%c\" na sua frase : \n%s", contagem, letra, texto);

    return 0;
}