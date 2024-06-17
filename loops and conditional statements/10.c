//Write a program you have to make a summation of first and last Digit. (E.g.,
//1234 Ans: -5)

#include <stdio.h>

int main() {
    int number, first_digit, last_digit;
    int is_negative = 0;

   
    printf("Enter a number: ");
    scanf("%d", &number);

    
    if (number < 0) {
        is_negative = 1;
        number = -number; 
    }

   
    last_digit = number % 10;

    
    first_digit = number;
    while (first_digit >= 10) {
        first_digit /= 10;
    }

    
    int sum = first_digit + last_digit;

    
    if (is_negative) {
        sum = -sum;
    }

   
    printf("Summation of first and last digit is %d\n", sum);

    return 0;
}

