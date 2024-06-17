//Store 5 numbers in array and sort it in ascending order

#include<stdio.h>

int main(){
	int i,j,n,num,arr[5],temp;
	printf("--------before sorting----------\n");
	printf("Enter values :");
	
	for(i=0;i<5;i++){
	scanf("%d",&arr[i]);
	}

	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(arr[i]>arr[j]){
			
			temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
			}
			
		}
	}
	
	for(i=0;i<5;i++){
	
	printf("%d\t",arr[i]);
	}
//	
	printf("\nMaximum value is = %d.",arr[5-1]);
	printf("\nSecond maximum value is = %d.",arr[5-2]);
	return 0;
	}
