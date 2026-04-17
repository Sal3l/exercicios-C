
// Peça um número de 1 a 7 e mostre o nome do dia correspondente

#include <stdio.h>

int main() {
    int dia;

    scanf("%i", &dia);

    switch(dia) {
        case 1:
            printf("segunda feira");
            break;
        case 2:
            printf("terça feira");
            break;
        case 3:
            printf("quarta feira");
            break;
        case 4:
            printf("quinta feira");
            break;
        case 5:
            printf("sexta feira");
            break;
        case 6:
            printf("sabado");
            break;
        case 7:
            printf("domingo");
            break;
    }
}