//Write a program to find out the max number from given array using function

#include <stdio.h>

void fun();

int main() {
	fun();
    return 0;
}



void fun(){
	
	int n; 
    int max; 
    int i;
    
    printf("Enter range of array:");
    scanf("%d",&n);
    
    int arr[n];
	 
    printf("Enter %d numbers:\n",n);
    for( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    max = arr[0];

   
    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i]; 
        }
    }

    
    printf("The maximum number in the array is: %d\n", max);
}

