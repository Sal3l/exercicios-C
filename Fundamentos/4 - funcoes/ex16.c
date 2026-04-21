
// Escreva uma função void preencherArray(int lista[], int tamanho) que preenche um array com valores dados pelo usuário.
// Crie também uma função int somarArray(int lista[], int tamanho) para somar todos os valores.



#include <stdio.h>

void preencherArray(int lista[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("escolha o valor do %iº numero : ", i + 1);
        scanf("%i", &lista[i]);
    }
}

int somarArray(int lista[], int tamanho) {
    int soma = 0;

    for (int i = 0; i < tamanho; i++) {
        soma += lista[i];
    }

    return soma;
}

int main() {
    int lista[5];

    preencherArray(lista, sizeof(lista) / sizeof(lista[0]));

    int soma = somarArray(lista, sizeof(lista) / sizeof(lista[0]));

    printf("\na soma de todos os numeros da lista é : %i", soma);

    return 0;
}

