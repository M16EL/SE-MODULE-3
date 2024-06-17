#include <stdio.h>

int main() {
    int arr[5]; 
    int size = 5; 
    int max; 

   
    printf("Enter 5 numbers:\n");
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

   
    max = arr[0];

   
    for(int i = 1; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i]; 
        }
    }

    
    printf("The maximum number in the array is: %d\n", max);

    return 0;
}

