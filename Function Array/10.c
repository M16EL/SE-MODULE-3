#include <stdio.h>

int main() {
    int inputNumber;
    printf("Enter a number: ");
    scanf("%d", &inputNumber);

    
    if (isNumberPalindrome(inputNumber)) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }

    return 0;
}

int isNumberPalindrome(int number) {
    int originalNumber = number;
    int reversedNumber = 0;
    int digit;

  
    for (int tempNumber = number; tempNumber != 0; tempNumber /= 10) {
        digit = tempNumber % 10;
        reversedNumber = reversedNumber * 10 + digit;
    }

    
    return (originalNumber == reversedNumber);
}

