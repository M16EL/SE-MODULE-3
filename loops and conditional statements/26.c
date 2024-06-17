//(1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n

#include<stdio.h>

int main(){
	int i ,j,n,m,k,l,result, sum=0;
	printf("Enter Number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("(");
			for(j=1;j<=i;j++){
				if(j >= i){
					printf("%d",j);
				}else{
					printf("%d+",j);
				}
					
		}
     	printf(")");
		if(i>=n){
			printf(" ");
		}else{
			printf("+");
		}
   	}
	
	
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
		sum += j;
		}
		
	}
		
	printf("=%d",sum);

	return 0;
	
}

