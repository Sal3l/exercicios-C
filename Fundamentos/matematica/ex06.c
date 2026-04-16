

// Receba dois int 
// diga qual é o maior ou se são iguais

#include <stdio.h> 

int main() {
    
    int num1 = 0;
    int num2 = 0; 
    
    printf("escreva um numero inteiro: \n");
    scanf("%i", &num1); 
    printf("\n"); 
    
    printf("escreva outro numero inteiro: \n"); 
    scanf("%i", &num2); 
    printf("\n"); 
    
    if (num1 > num2) { 
        
        printf("o primeiro numero é maior"); 
    
    } else if (num1 < num2) { 
        
        printf("o segundo numero é maior"); 
    
    } else { 
        
        printf("os dois numeros tem o mesmo valor"); 
    
    } 
    
    return 0; 

}

