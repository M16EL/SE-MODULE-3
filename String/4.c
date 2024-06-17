//Write a program in C to count the total number of words in a string

#include <stdio.h>

int main() {
	int i;
    char str[100];
    int count = 0;

   
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

   
    for (i = 0; str[i] != '\0'; i++) {
        if ((i == 0 || str[i - 1] == ' ' || str[i - 1] == '\n' || str[i - 1] == '\t') && str[i] != ' ' && str[i] != '\n' && str[i] != '\t') {
            count++;
        }
    }

   
    printf("Total number of words: %d\n", count);

    return 0;
}

