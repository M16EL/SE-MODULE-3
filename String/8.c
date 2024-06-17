//Write a program in C to count the total number of vowels or consonants in a
//string.

#include <stdio.h>

int main() {
	int i;
    char str[100];
    int vowels = 0, consonants = 0;

    
    printf("Enter a string: ");
    scanf("%s", str);

   
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            char ch = tolower(str[i]); 
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

   
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}

