

// Peça números ao usuário até ele digitar 0
// Some todos os números digitados (exceto o zero) e mostre no final


#include <stdio.h>

int main() {
    int soma = 0;
    int controle = -1;

    while (controle != 0) {
        printf("\ninsira um novo numero, e uma hora digite 0\n");
        scanf("%i", &controle);

        if (controle != 0) {
            soma += controle;
        }
    }

    printf("soma total : %i", soma);
}

