//.Write a program in C to remove characters from a string except alphabets.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
	int i;
    char str[100], result[100];
    int j = 0;

   
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

   
    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            result[j++] = str[i];
        }
    }
    result[j] = '\0'; 

   
    printf("String after removing non-alphabetic characters: %s\n", result);

    return 0;
}


