
// Crie uma função int existeValor(int lista[], int tamanho, int valor) que retorna 1 se o valor estiver no array, ou 0 caso não esteja.
// No main, use um array com 5 números e pergunte ao usuário se um valor existe nesse array.

#include <stdio.h>

int existeValor(int lista[], int tamanho, int valor) {
    
    for (int i = 0; i < tamanho; i++) {
        if (lista[i] == valor) {
            return 1
        }
    }

    return 0;
}

int main() {
    int lista[5] = {1, 2, 3, 4, 5};
    int valor = 0;

    printf("Escolha um valor para verificar na lista : \n");
    scanf("%i", &valor);

    if (existeValor(lista, 5, valor) == 1) {
        printf("existe um %i na lista", valor);
    } else {
        printf("não existe um %i na lista", valor);
    }

    return 0;
}