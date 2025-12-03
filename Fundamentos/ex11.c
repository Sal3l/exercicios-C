
// Concatene um caractere e um número :
// Mostre na tela: "A letra é A e o número é 10" — usando char e int

#include <stdio.h> 

int main() { 
    
    int num = 0; 
    char letra = 'a'; 
    
    printf("escreva uma letra : \n");     
    scanf("%c", &letra); 
    printf("\n"); 
    
    printf("escreva um numero : \n"); 
    scanf("%i", &num); 
    printf("\n"); 
    
    printf("A letra é %c e o número é %i", letra, num); 
    
    return 0; 

}
