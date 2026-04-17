
//Crie uma função int fatorial(int n) que retorna o fatorial de n.
// Use um for dentro da função. Teste no main.

#include <stdio.h>

int fatorial(int num) {
    int multiplicacao = 1;

    for (int i = num; i > 0; i--) {
        multiplicacao *= i;
    }

    return multiplicacao;
}

int main() {
    int numero;

    printf("calcular fatoria de um numero\n");
    scanf("%i", &numero);

    int resultado = fatorial(numero);

    printf("o fatorial de %i é %i", numero, resultado);

    return 0;
}
