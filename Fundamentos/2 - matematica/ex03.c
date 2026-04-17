
// Peça para o usuário digitar um número inteiro. 
// Calcule e imprima o dobro e o triplo dele

#include <stdio.h> 

int main() { 
    
    int num = 0; 
    
    printf("escreva um numero inteiro : \n"); 
    scanf("%i", &num); 
    
    printf("o dobro é : %d", num * 2); 
    
    printf("\no triplo é : %d", num * 3); 
    
    return 0; 

}