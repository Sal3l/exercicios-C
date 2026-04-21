
// Peça uma string com fgets, e crie uma função que remova o '\n' no final usando ponteiros.

#include <stdio.h>
#include <string.h>

int main() {
    char texto[20];

    printf("\nescreva uma palavra : \n");
    fgets(texto, sizeof(texto), stdin);

    char *pTexto = texto;

    pTexto[strcspn(pTexto, "\n")] = '\0';

    return 0;
}