#include <stdio.h>

int main() {
    char countryName[100];
    int i;
    int newWord = 1; 

    
    printf("Enter the country's name: ");
    scanf("%[^\n]", countryName); 

    
    printf("Abbreviated form: ");

   
    for (i = 0; countryName[i] != '\0'; i++) {
       
        if ((countryName[i] >= 'A' && countryName[i] <= 'Z' || countryName[i] >= 'a' && countryName[i] <= 'z') && newWord) {
            printf("%c", (countryName[i] >= 'a' && countryName[i] <= 'z') ? (countryName[i] - 'a' + 'A') : countryName[i]); // Print uppercase if lowercase
            newWord = 0; 
        }

       
        if (countryName[i] == ' ' || countryName[i] == '-') {
            newWord = 1; 
        }
    }

    printf("\n");

    return 0;
}

