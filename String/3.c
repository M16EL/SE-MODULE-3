//Write a program in C to print individual characters of a string in reverse order

#include <stdio.h>

int main() {
    char str[100];
    int i;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

   
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    
  
    for (i = length - 1; i >= 0; i--) {
       
        if (str[i] != '\n') {
            printf("%c", str[i]);
        }
    }

    return 0;
}

