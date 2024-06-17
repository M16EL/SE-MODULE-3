//Write a program in C to find the largest and smallest words in a string

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], smallestWord[100], largestWord[100];
    int i, start = 0, smallestLen = 100, largestLen = 0;

    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    
    for (i = 0; i < 100; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            int len = i - start;
            if (len < smallestLen) {
                smallestLen = len;
                strncpy(smallestWord, str + start, len);
                smallestWord[len] = '\0'; 
            }
            if (len > largestLen) {
                largestLen = len;
                strncpy(largestWord, str + start, len);
                largestWord[len] = '\0';
            }
            if (str[i] == '\0') {
                break; 
            start = i + 1;
        }
    }

    
    printf("Smallest word: %s\n", smallestWord);
    printf("Largest word: %s\n", largestWord);

    return 0;
}

