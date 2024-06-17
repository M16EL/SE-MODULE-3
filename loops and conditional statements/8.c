//Write a program to find out the max from given number (E.g., No: -1562
//Max number is 6)

#include <stdio.h>

int main() {
    int number, digit, max_digit = 0;

   
    printf("Enter a number: ");
    scanf("%d", &number);

    
    if (number < 0) {
        number = -number;
    }

   
    while (number > 0) {
        digit = number % 10; 
        if (digit > max_digit) {
            max_digit = digit; 
        }
        number /= 10; 
    }

    
    printf("Max number is %d\n", max_digit);

    return 0;
}

