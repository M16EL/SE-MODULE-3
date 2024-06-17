//Calculate sum of 10 numbers using of while loop
#include<stdio.h>

int main(){
	int i, num, sum=0;
	
	while(i<10){
		printf("Enter number:\n");
		scanf("%d",&num);
		sum += num;
		i++;
	}
		printf("\n%d",sum);
	return 0;
}
