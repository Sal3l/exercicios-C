
// Média de dois números

#include <stdio.h> 

int main() { 
    
    float num1 = 0; 
    float num2 = 0; 
    
    printf("escreva um numero: \n"); 
    scanf("%f", &num1); 
    
    printf("escreva outro numero: \n"); 
    scanf("%f", &num2); 
    
    printf("a média é : %f", (num1 + num2) / 2); 
    
    return 0;

}