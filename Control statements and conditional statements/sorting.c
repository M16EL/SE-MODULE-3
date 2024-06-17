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
//	
	printf("\nMaximum value is = %d.",arr[num-1]);
	printf("\nSecond maximum value is = %d.",arr[num-2]);
	return 0;
	}

