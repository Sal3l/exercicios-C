
// Crie uma função int maior(int a, int b) que retorna o maior dos dois valores.

#include <stdio.h>

void maior(int num1, int num2) {
    if (num1 > num2) {
        printf("o primeiro numero (%i) é maior ", num1);
    } else if (num1 < num2) {
        printf("o segundo numero (%i) é maior", num2);
    } else {
        printf("os dois numeros (%i, %i) tem o mesmo valor", num1, num2);
    }
}

int main() {
    int num1 = 0;
    int num2 = 0;

    printf("escreva um numero inteiro: \n");
    scanf("%i", &num1);

    printf("\n");

    printf("escreva outro numero inteiro: \n");
    scanf("%i", &num2);

    printf("\n");

    maior(num1, num2);

    return 0;
}