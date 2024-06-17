//Write a program in C to combine two strings manually

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], combined[200];

   
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    
    if (str1[strlen(str1) - 1] == '\n') {
        str1[strlen(str1) - 1] = '\0';
    }

    
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    
    if (str2[strlen(str2) - 1] == '\n') {
        str2[strlen(str2) - 1] = '\0';
    }

    
    strcpy(combined, str1);
    strcat(combined, str2);

    
    printf("Combined string: %s\n", combined);

    return 0;
}
