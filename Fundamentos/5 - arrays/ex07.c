
// Zere todos os elementos do vetor (substitua por 0) e exiba o vetor zerado.

#include <stdio.h>

int main() {
    int lista[5] = {16, 32, 64, 128, 256};
    int listaLength = sizeof(lista) / sizeof(lista[0]);

    for (int i = 0; i < listaLength; i++) {
        lista[i] = 0;
    }

    for (int i = 0; i < listaLength; i++) {
        printf("%i, ", lista[i]);
    }

    return 0;
}

