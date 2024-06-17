//(1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)
#include<stdio.h>

int main(){
	int i , n , result, sum=0;
	printf("Enter Number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("(%d * %d) + ",i,i);
		if(i==n){
			printf("(%d * %d) = ",i,i);
		}
		result = i * i;
		sum += result;
	}
	printf("%d",sum);
	return 0;
	
}
