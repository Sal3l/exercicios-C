
// Declare um ponteiro int *pIdade;, faça ele apontar para a variável idade, e mostre:

// O valor da variável idade
// O valor do ponteiro pIdade (deve ser o endereço de idade)
// O valor apontado por pIdade com *pIdade (deve ser 25)

#include <stdio.h>

int main() {
    int idade = 25;
    int *pIdade = &idade;

    printf("\nidade : %i\npIdade : %p\n*pIdade : %i", idade, pIdade, *pIdade);
}

