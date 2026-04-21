
// Crie uma função float calcularMedia() que retorna a média dos elementos de um array.
// No main, peça para o usuário digitar 5 notas e informe a média.

#include <stdio.h>
#include <string.h>

float calcularMedia(int notas[], int tamanho) {
    float soma = 0;

    for (int i = 0; i < tamanho; i++) {
        soma += notas[i];
    }

    float media = soma / tamanho;

    return media;
}

int main() {
    int notas[5];

    for (int i = 0; i < sizeof(notas) / sizeof(notas[0]); i++) {
        int nota = 0;

        printf("qual foi a sua %iº nota? : \n", i + 1);
        scanf("%i", &nota);

        notas[i] = nota;
    }

    float media = calcularMedia(notas, sizeof(notas) / sizeof(notas[0]));

    printf("a sua média foi : %.2f", media);

    return 0;
}