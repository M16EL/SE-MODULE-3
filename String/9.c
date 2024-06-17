//Write a program in C to find the maximum number of characters in a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int maxLength = 0;

   
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    int length = strlen(str);

    
    if (length > maxLength) {
        maxLength = length;
    }

    
    printf("Maximum number of characters in the string: %d\n", maxLength);

    return 0;
}

