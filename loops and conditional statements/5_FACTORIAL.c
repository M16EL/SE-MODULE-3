#include<stdio.h>

int main(){
	int i , j,result = 1;
	printf("Enter value:",j);
	scanf("%d",&j);
	for(i=j;i>1;i--){
         result *= i;
	}
	printf("Factorial of %d = %d\n", j, result);
	
	return 0;
}
