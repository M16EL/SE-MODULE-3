#include<stdio.h>

int main(){
	int i;
	int arr[5];
	printf("Enter 5 Numbers:");
	for(i=0;i<5;i++){
		scanf("%d", &arr[i]);
	}
	
	for(i=0;i<5;i++){
		printf("%d", &arr[i]);
		if(arr[i] %2 == 0){
			printf("%d is Even Number\n", arr[i]);
		}else{
			printf("%d is Odd Number\n", arr[i]);
		}
	}
	return 0;
}
