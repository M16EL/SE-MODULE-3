#include<stdio.h>

int main(){
	int i=1 , j,result = 1;
	printf("Enter value:",j);
	scanf("%d",&j);
	while(i<=j){
		result = result * i;
		i++;
	}
	 printf("%d", result);
	 return 0;
}
