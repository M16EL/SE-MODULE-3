//WAP to take two Array input from user and sort them in ascending or
//descending order as per user’s choice

#include<stdio.h>

int main(){
	int i,j,n,num,arr[num],temp;
	printf("--------before sorting----------\n");
	printf("Enter value of num:");
	scanf("%d",&num);
	n=num;
	printf("Enter values :");
	
	for(i=0;i<n;i++){
	scanf("%d",&arr[i]);
	}

	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
			
			temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
			}
			
		}
	}
	
	for(i=0;i<n;i++){
	
	printf("%d\t",arr[i]);
	}
	
	printf("\nMaximum value is = %d.",arr[num-1]);
	printf("\nSecond maximum value is = %d.",arr[num-2]);
	return 0;
	}








//#include <stdio.h>
//
//
//void sortAscending(int arr[], int n);
//
//
//void sortDescending(int arr[], int n);
//
//
//
//int main() {
//    int n1, n2, choice;
//    
//   
//    printf("Enter the size of the first array: ");
//    scanf("%d", &n1);
//    int arr1[n1];
//    
//   
//    printf("Enter %d elements for the first array: ", n1);
//    for(int i = 0; i < n1; i++) {
//        scanf("%d", &arr1[i]);
//    }
//    
//    
//    printf("Enter the size of the second array: ");
//    scanf("%d", &n2);
//    int arr2[n2];
//    
//   
//    printf("Enter %d elements for the second array: ", n2);
//    for(int i = 0; i < n2; i++) {
//        scanf("%d", &arr2[i]);
//    }
//    
//   
//    printf("Enter 1 for ascending order or 2 for descending order: ");
//    scanf("%d", &choice);
//    
//   
//    if(choice == 1) {
//        sortAscending(arr1, n1);
//        sortAscending(arr2, n2);
//        printf("Arrays sorted in ascending order.\n");
//    } else if(choice == 2) {
//        sortDescending(arr1, n1);
//        sortDescending(arr2, n2);
//        printf("Arrays sorted in descending order.\n");
//    } else {
//        printf("Invalid choice. Exiting.\n");
//        return 1;
//    }
//    
//   
//    printf("First array: ");
//    for(int i = 0; i < n1; i++) {
//        printf("%d ", arr1[i]);
//    }
//    printf("\n");
//    
//    printf("Second array: ");
//    for(int i = 0; i < n2; i++) {
//        printf("%d ", arr2[i]);
//    }
//    printf("\n");
//    
//    return 0;
//}
//
//
//void sortAscending(int arr[], int n) {
//    for(int i = 0; i < n-1; i++) {
//        for(int j = 0; j < n-i-1; j++) {
//            if(arr[j] > arr[j+1]) {
//               
//                int temp = arr[j];
//                arr[j] = arr[j+1];
//                arr[j+1] = temp;
//            }
//        }
//    }
//}
//
//
//void sortDescending(int arr[], int n) {
//    for(int i = 0; i < n-1; i++) {
//        for(int j = 0; j < n-i-1; j++) {
//            if(arr[j] < arr[j+1]) {
//                
//                int temp = arr[j];
//                arr[j] = arr[j+1];
//                arr[j+1] = temp;
//            }
//        }
//    }
//}



