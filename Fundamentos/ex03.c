
// Usando o ponteiro *pIdade, modifique o valor de idade para 30. Depois, imprima idade para mostrar que ela mudou mesmo sem usar diretamente a variável.

#include <stdio.h>

int main() {
    int idade = 25;
    int *pIdade = &idade;

    *pIdade = 30;

    printf("\nidade : %i", idade);
}