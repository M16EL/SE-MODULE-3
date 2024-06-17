//Write a program in C to find the length of a string without using library
//functions.

#include <stdio.h>

int calculateLength(char str[]);

int main() {
    char inputString[100];

    
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);
    
    
    int length = calculateLength(inputString);

    
    printf("The length of the string is: %d\n", length);

    return 0;
}

int calculateLength(char str[]) {
    int len = 0;
    int i;
    for (i = 1; str[i] != '\0'; i++) {
        len++;
    }
    
    return len;
}
