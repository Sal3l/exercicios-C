

// Crie uma função void trocar(int *a, int *b) que troque os valores de duas variáveis. Teste no main().

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int primeiro = 0;
    int segundo = 0;

    printf("primeiro numero: \n");
    scanf("%i", &primeiro);

    printf("segundo numero: \n");
    scanf("%i", &segundo);

    int *pPrimeiro = &primeiro;
    int *pSegundo = &segundo;

    trocar(pPrimeiro, pSegundo);

    printf("\nprimeiro : %i\nsegundo : %i", primeiro, segundo);

    return 0;
}

