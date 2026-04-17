
// Crie uma função float media(float n1, float n2, float n3) que retorna a média.
// No main, diga se a pessoa foi aprovada (média ≥ 7) ou reprovada.

#include <stdio.h>

float media(float num1, float num2, float num3) {
    return (num1 + num2 + num3) / 3;
}

int main() {
    float num1 = 0;
    float num2 = 0;
    float num3 = 0;

    printf("escreva a 1º nota\n");
    scanf("%f", &num1);

    printf("escreva a 2º nota\n");
    scanf("%f", &num2);

    printf("escreva a 3º nota\n");
    scanf("%f", &num3);

    float resultado = media(num1, num2, num3);

    if (resultado >= 7) {
        printf("você foi aprovado média %f", resultado);
    } else {
        printf("você foi reprovado média %f", resultado);
    }

    return 0;
}