

// Leia dois nomes e use strcpy(destino, origem);
// Mostre o segundo nome sendo sobrescrito pelo primeiro.


#include <stdio.h>
#include <string.h>

int main() {
    char nome1[50];
    int tamanho = 0;
    char nome2[50];

    printf("qual o seu nome?: \n");
    fgets( nome1, sizeof(nome1), stdin);

    printf("escreva um segundo nome : \n");
    fgets( nome2, sizeof(nome2), stdin);

    strcpy(nome2, nome1);

    printf("2º nome : %s", nome2);

    return 0;
}