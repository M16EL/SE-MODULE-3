#include<stdio.h>

int main(){
	int year;
	
	printf("Enter year :");
	scanf("%d",&year);
	
	if(year % 4 == 0 && year % 100 != 0){
		printf("\n %d is leap year",year);
	}else{
		printf("\n %d is not a leap year",year);
	}
	
}
