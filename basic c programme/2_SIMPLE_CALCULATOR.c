#include <stdio.h>

int main() {
    
    int num1, num2, addition, subtraction, multiplication, division, modulo;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

            addition = num1 + num2;
            printf("Addition: %0.2d\n", addition);
            
        
            subtraction = num1 - num2;
            printf("Subtraction: %0.2d\n", subtraction);
            
       
            multiplication = num1 * num2;
            printf("Multiplication: %0.2d\n", multiplication);
            
            modulo = num1 % num2;
            printf("Modulo: %0.2d\n", modulo);
           
    return 0;
}
