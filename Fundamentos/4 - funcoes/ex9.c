
/* Crie uma função void menu() que mostra:
1 - Somar
2 - Subtrair
3 - Multiplicar
4 - Dividir
Depois crie o main com um switch que chama a operação dependendo da escolha do usuário. */

#include <stdio.h>

void menu() {
    printf("\nescreva a operação\n\n1 - Adição\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n\n");
}

int main() {
    int num1 = 0;
    int num2 = 0;

    printf("\nescreva o 1º numero\n");
    scanf("%i", &num1);

    printf("\nescreva o 2º numero\n");
    scanf("%i", &num2);

    int operacao = 0;

    menu();
    scanf("%i", &operacao);

    switch(operacao) {
        case 1:
            printf("\nresultado : %i", num1 + num2);
            break;
        case 2:
            printf("\nresultado : %i", num1 - num2);
            break;
        case 3:
            printf("\nresultado : %i", num1 * num2);
            break;
        case 4:
            if (num2 == 0) {
                printf("\n\npor favor não tente dividir por 0");
                break;
            } else {
                printf("\nresultado : %i", num1 / num2);
                break;
            }
    }
}