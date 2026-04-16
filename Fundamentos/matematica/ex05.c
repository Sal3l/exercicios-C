

// Receba um int do usuário
// e diga se ele é par ou ímpar

#include <stdio.h> 

int main() { 
    
    int num1 = 0; 
    
    printf("escreva um numero inteiro: \n"); 
    scanf("%i", &num1); 
    
    if (num1 % 2 == 1) { 
        
        printf("o numero é impar"); 
    
    } else { 
        
        printf("o numero é par"); 
    
    } 
    
    return 0; 

}