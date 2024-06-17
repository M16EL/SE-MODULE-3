//Write a program in C to find the number of times a given word 'is' appears in
//the given string.

#include <stdio.h>
#include <string.h>

int main() {
	int i;
    char str[100], word[] = "is";
    int count = 0, wordLength = strlen(word), strLength;

   
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    
    strLength = strlen(str);

  
    for (i = 0; i <= strLength - wordLength; i++) {
        
        if (strncmp(str + i, word, wordLength) == 0) {
            count++;
        }
    }

   
    printf("Number of times 'is' appears in the string: %d\n", count);

    return 0;
}

