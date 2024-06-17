#include <stdio.h>


void reverseString(char str[]) {
    if (str[0] == '\0') {
        return; 
    } else {
        reverseString(&str[1]);
        printf("%c", str[0]);   
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str); 

    printf("Reversed string: ");
    reverseString(str); 
    printf("\n");

    return 0;
}

