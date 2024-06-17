#include<stdio.h>

int main(){
	int i, n1 = 0, n2 = 1, n,result;
	printf("Enter value:",n);
	scanf("%d",&n);
	printf("%d %d ",n1,n2);
	for(i=0 ; i<n ;i++){
		result= n1 + n2;
     	n1 = n2;
		n2 = result;
		printf("%d ",result);
	}
	return 0;
}
