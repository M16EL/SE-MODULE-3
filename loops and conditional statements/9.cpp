//Write a program make a summation of given number (E.g., 1523 Ans: -11)

#include <stdio.h>

int main() {
    int number, digit, sum = 0;
    int is_negative = 0;

   
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        is_negative = 1;
        number = -number; 
    }

   
    while (number > 0) {
        digit = number % 10; 
        sum += digit; 
        number /= 10; 
}
}
  

