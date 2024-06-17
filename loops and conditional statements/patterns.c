#include<stdio.h>

int main(){
	int n = 5,i ,j , sum;
	int m = 5;
	
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
		     if (j%2==0){
		     	printf("1");
			 }else{
			 	printf("0");
			 }
			
		}
	printf("\n");
	}
	return 0;
}

