

// Com o mesmo array, exiba quais notas ficaram acima da média calculada no exercício anterior.

#include <stdio.h>

int main() {
    int lista[5];
    int acimaM[5];
    int listaLength = sizeof(lista) / sizeof(lista[0]);

    for (int i = 0; i < listaLength; i++) {
        int nota = 0;
        printf("valor da %iº nota\n", i + 1);
        scanf("%i", &nota);
        lista[i] = nota;

        if (nota >= 7) {
            acimaM[i] = 1;
        }
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

    printf("\n\nnotas acima da média\n");

    for (int i = 0; i < listaLength; i++) {
        if (acimaM[i] == 1) {
            printf("\n%i", lista[i]);
        }
    }

    return 0;
}