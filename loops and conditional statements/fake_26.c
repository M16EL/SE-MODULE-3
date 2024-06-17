//(1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n

#include<stdio.h>

int main(){
	int i ,j,n,m,k,l,result, sum=0;
	printf("Enter Number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	
	
		if(i==1){
				printf("(%d)+",j);
		}else if(i>=1){
			printf("(");
			for(j=1;j<=i;j++){
				if(j >= i){
					printf("%d",j);
				}else{
					printf("%d+",j);
				}
					
		}
		
		printf(")");
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




//for(k=i;k<=i;k++){
//				for(l=1;l<=k;l++){
//					printf("(");
//					printf("%d",l);
//					printf(")");
//					
//				}
//				printf("+");
//			}



//
