
// Crie dois ponteiros que apontam para a mesma variável. Modifique o valor usando um ponteiro e imprima usando o outro.


#include <stdio.h>

int main() {
    int idade = 25;
    int *pIdade1 = &idade;
    int *pIdade2 = &idade;

    *pIdade1 = 30;

    printf("\nidade : %i", *pIdade2);
}