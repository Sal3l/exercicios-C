

// Receba dois float e mostre:
// soma - subtração - multiplicação - divisão

#include <stdio.h> 

int main() { 
    
    float num1 = 0; 
    float num2 = 0; 
    
    printf("escreva um numero : \n"); 
    scanf("%f", &num1); 
    printf("\n"); 
    
    printf("escreva outro numero : \n"); 
    scanf("%f", &num2); 
    printf("\n"); 
    
    printf("soma: %f\nsubtração: %f\nmultiplicação: %f\ndivisão: %f", num1 + num2, num1 - num2, num1 * num2, num1 / num2); 
    
    return 0; 

}
