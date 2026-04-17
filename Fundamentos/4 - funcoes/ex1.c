
// Crie uma função int somar(int a, int b) que recebe dois inteiros e retorna a soma deles.
// No main, peça dois números ao usuário e exiba o resultado usando a função.

#include <stdio.h>

int soma(int A, int B) {
    int C = A + B;
    return C;
}

int main() {
    int num1 = 0;
    int num2 = 0;

    printf("Valor do 1º numero : \n");
    scanf("%i", &num1);

    printf("Valor do 2º numero : \n");
    scanf("%i", &num2);

    int total = soma(num1, num2);

    printf("\na soma total é %i", total);

    return 0;
}

