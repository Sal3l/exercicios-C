
// Peça um número e diga se ele existe no vetor (e em qual posição está, se quiser).

#include <stdio.h>

int main() {
    int lista[5] = {16, 32, 64, 128, 256};
    int listaLength = sizeof(lista) / sizeof(lista[0]);
    int existe = 0;
    int num = 0;

    printf("tente adivinhar um numero do array\n");
    scanf("%i", &num);

    for (int i = 0; i < listaLength; i++) {
        if (num == lista[i]) {
            printf("existe um numero na lista com esse valor, a posição dele é %i", i);
            existe = 1;
        }
    }

    if (existe == 0) {
        printf("não existe nenhum numero no array com esse valor");
    }

    return 0;
}
