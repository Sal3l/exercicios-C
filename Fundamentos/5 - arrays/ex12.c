
// Peça um número ao usuário e, ao exibir o vetor,
// não mostre os valores iguais a esse número (não precisa apagar de verdade do array, só não imprimir).

#include <stdio.h>

int main() {
    int lista[5] = {5, 6, 7, 8, 9};
    int listaLength = sizeof(lista) / sizeof(lista[0]);
    int naoMostrar = 0;

    printf("que numero da lista você gostaria que não fosse mostrado? : \n");
    scanf("%i", &naoMostrar);

    for (int i = 0; i < listaLength; i++) {
        if (lista[i] != naoMostrar) {
            printf("\n%i", lista[i]);
        }
    }

    return 0;
}

