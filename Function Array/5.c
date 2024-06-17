//WAP to take two Array input from user and sort them in ascending or
//descending order as per user’s choice

#include <stdio.h>
void sortArray(int arr[], int n, int ascending);
void printArray(int arr[], int n);

int main() {
    int n1, n2, choice;
    printf("Enter the size of the first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter elements of the first array:\n");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter elements of the second array:\n");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Enter 1 for ascending or 0 for descending order: ");
    scanf("%d", &choice);

    sortArray(arr1, n1, choice);
    sortArray(arr2, n2, choice);

    printf("Sorted first array:\n");
    printArray(arr1, n1);

    printf("Sorted second array:\n");
    printArray(arr2, n2);

    return 0;
}

void sortArray(int arr[], int n, int ascending) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (ascending) {
                if (arr[j] > arr[j+1]) {
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            } else {
                if (arr[j] < arr[j+1]) {
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


