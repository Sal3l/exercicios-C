
// Crie uma função void mostrarEndereco(int *ptr) que mostra o endereço e o valor da variável passada para ela.

#include <stdio.h>

void mostrarEndereco(int *ptr) {
    printf("\nlocal na memória : %p", ptr);
}

int main() {
    int idade = 25;

    mostrarEndereco(&idade);
}