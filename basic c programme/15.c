#include <stdio.h>
#include <ctype.h>

int main() {
    char schoolName[100];
    int i;
    int newWord = 1; 

    
    printf("Enter the school's name: ");
    scanf("%[^\n]", schoolName); 

    
    printf("Abbreviated form: ");

   
    for (i = 0; schoolName[i] != '\0'; i++) {
      
        if (isalpha(schoolName[i]) && newWord) {
            printf("%c", toupper(schoolName[i]));
            newWord = 0; 
        }

        
        if (schoolName[i] == ' ') {
            newWord = 1; 
        }
    }

    printf("\n");

    return 0;
}

