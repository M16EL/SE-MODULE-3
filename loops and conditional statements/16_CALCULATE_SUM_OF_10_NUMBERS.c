//Calculate the Sum of Natural Numbers Using the While Loop
#include<stdio.h>

int main(){
	int i , j , sum;
		printf("Enter value:");
		scanf("%d",&j);
	while(i<=j){
		sum += i;
        i++;
	}
		printf("%d",sum);
	return 0;
}
