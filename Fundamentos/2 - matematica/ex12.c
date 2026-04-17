
// Use o % (módulo) para descobrir se um número é múltiplo de outro

#include <stdio.h> 

int main() { 
    
    int num1 = 0; 
    int num2 = 0; 
    
    printf("escreva um numero inteiro: \n"); 
    scanf("%i", &num1); 
    
    printf("\nescreva outro numero inteiro: \n"); 
    scanf("%i", &num2); 
    
    if (num1 % num2 == 0) { 
        
        printf("\no primeiro é divisivel pelo segundo"); 
    
    } else { 
        
        printf("\no primeiro não é divisivel pelo segundo"); 
    
    } 
    
    return 0; 

}