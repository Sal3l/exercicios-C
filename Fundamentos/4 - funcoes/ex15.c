
// Faça uma função void colocarMaiusculo(char texto[]) que transforma uma string para maiúsculas.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void colocarMaiusculo(char texto[], int comprimento) {
    for (int i = 0; i < comprimento; i++) {
        texto[i] = toupper(texto[i]);
    }

    printf("frase maiuscula : %s", texto);
}

int main() {
    char frase[100];

    printf("Escreva uma frase : \n");
    fgets(frase, sizeof(frase), stdin);

    colocarMaiusculo(frase, strlen(frase));

    return 0;
}

