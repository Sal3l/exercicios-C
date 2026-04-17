
// Peça dois números e uma operação (+, -, *, /) e mostre o resultado usando switch

#include <stdio.h>

int main() {
    int num1;
    int num2;
    int operacao;

    printf("\nescreva o 1º numero\n");
    scanf("%i", &num1);

    printf("\nescreva o 2º numero\n");
    scanf("%i", &num2);

    printf("\nescreva a operação\n\n1 - Adição\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n\n");
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
