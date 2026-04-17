
// Peça uma senha (ex: 1234)
// Enquanto o usuário digitar errado, continue pedindo
// Quando acertar, mostre "Acesso liberado"

#include <stdio.h>

int main() {
    int senha = 0;
    int opcao;

    while (senha == 0) {
        printf("\ninsira a senha correta (1234)\n");
        scanf("%i", &opcao);

        if (opcao == 1234) {
            senha = 1;
            printf("Acesso liberado");
        }
    }
}

