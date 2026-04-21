
// Peça ao usuário para digitar 5 nomes.
// Crie uma função void listarNomesComLetra(char nomes[][50], int qtd, char letra) que mostra apenas os nomes que começam com a letra dada.


#include <stdio.h>
#include <string.h>

void listarNomesComLetra(char nomes[][20], int qtd, char letra) {
    
    int encontrou = 0;
    for (int i = 0; i < qtd; i++) {
        if (nomes[i][0] == letra) {
            encontrou += 1;
            printf("%s\n",nomes[i]);
        }
    }
    
    if (encontrou == 0) {
        printf("não existe nenhum nome que começa com essa letra");
    }
}

int main() {
    char listaNomes[4][20] = {"pedro", "lucas", "gustavo", "pablo"};
    char letra;

    printf("Escolha uma letra para listar nomes que começa com ela : \n");
    scanf("%c", &letra);

    listarNomesComLetra(listaNomes, 4, letra);
}

