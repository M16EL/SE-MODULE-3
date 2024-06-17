//Write a program in C to extract a substring from a given string

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], substring[100];
    int start, length;

    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

   
    printf("Enter the start index of the substring: ");
    scanf("%d", &start);

    
    printf("Enter the length of the substring: ");
    scanf("%d", &length);

   
    strncpy(substring, str + start, length);
    substring[length] = '\0'; 

    
    printf("Extracted substring: %s\n", substring);

    return 0;
}

