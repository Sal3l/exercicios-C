
/* Peça para o usuário digitar um número de 1 a 3:
1: Administrador
2: Usuário comum
3: Visitante
Use switch para imprimir a descrição do nível. 
Se for outro número, mostre "Nível inválido" */

#include <stdio.h>

int main() {
    int nivel;

    printf("qual nivel você deseja acessar?\n\n1 - Adiministrador\n2 - Usuario comum\n3 - Visitante\n\n");
    scanf("%i", &nivel);

    switch(nivel) {
        case 1:
            printf("Você entrou no modo Adiministrador");
            break;
        case 2:
            printf("Você entrou no modo Usuario comum");
            break;
        case 3:
            printf("Você entrou no modo Visitante");
            break;
        default:
            printf("opção invalida");
            break;
    }
}

