
// Receba três notas float 
// e diga se a média é maior ou igual a 7
// (aprovado) ou não (reprovado)

#include <stdio.h> 

int main() { 
    
    float num1 = 0; 
    float num2 = 0; 
    float num3 = 0; 
    
    printf("escreva a 1º nota\n"); 
    scanf("%f", &num1); 
    
    printf("escreva a 2º nota\n"); 
    scanf("%f", &num2); 
    
    printf("escreva a 3º nota\n"); 
    scanf("%f", &num3); 
    
    float media = (num1 + num2 + num3) / 3; 
    
    if (media >= 7) { 
        
        printf("você foi aprovado média %f", media); 
    
    } else { 
        
        printf("você foi reprovado média %f", media); 
    
    } 
    
    return 0; 

}
