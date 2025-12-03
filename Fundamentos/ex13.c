
// Operadores lógicos
// Crie dois int, verifique se ambos são positivos e menores que 100

#include <stdio.h> 

int main() { 
    
    int num1 = 110; 
    int num2 = 25; 
    
    if (num1 < 100 && num1 > 0) { 
 
        printf("%i é positivo e menor que 100\n\n", num1); 
 
    } else { 
 
        printf("%i é negativo e/ou maior que 100\n\n", num1); 
 
    } if (num2 < 100 && num2 > 0) { 
 
        printf("%i é positivo e menor que 100\n\n", num2); 
 
    } else { 
 
        printf("%i é negativo e/ou maior que 100\n\n", num2); 
 
    } 
    
    return 0; 

}