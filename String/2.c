//Write a program in C to separate individual characters from a string.

#include <stdio.h>

int main() {
    char inputString[100];
    int i;

   
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    
    printf("Individual characters in the string are:\n");
    for (i = 0; i < 100; i++) {
       
        if (inputString[i] == '\0') {
            break;
        }
       
        if (inputString[i] != '\n') {
            printf("%c\n", inputString[i]);
        }
    }

    return 0;
}

