

// Peça 5 notas (float) e calcule a média. Depois, diga se a média foi maior ou igual a 7 (aprovado).

#include <stdio.h>

int main() {
    int lista[5];
    int listaLength = sizeof(lista) / sizeof(lista[0]);

    for (int i = 0; i < listaLength; i++) {
        int nota = 0;
        printf("valor da %iº nota\n", i + 1);
        scanf("%i", &nota);
        lista[i] = nota;
    }

    float soma = 0;

    for (int i = 0; i < listaLength; i++) {
        soma += lista[i];
    }

    if ((soma / 5) >= 7) {
        printf("você foi aprovado média %.2f", soma / 5);
    } else {
        printf("você foi reprovado média %.2f", soma / 5);
    }

    return 0;
}
