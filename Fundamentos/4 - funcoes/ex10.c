
// Crie uma função int validarSenha(int senhaDigitada) que retorna 1 se for 1234 e 0 se não for.
// No main, use while para pedir a senha até acertar.

#include <stdio.h>

int validar(int senha) {
    if (senha == 1234) {
        printf("\nAcesso liberado");
        return 1;
    } else {
        printf("\nSenha incorreta\n");
        return 0;
    }
}

int main() {
    int senha = 0;
    int opcao;

    while (senha == 0) {
        printf("\ninsira a senha correta (1234)\n");
        scanf("%i", &opcao);

        senha = validar(opcao);
    }
}

