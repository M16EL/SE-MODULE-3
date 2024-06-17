#include<stdio.h>

int main(){
	int i,n;
	
	printf("Enter Number:");
	scanf("%d",&n);
	
	printf("Series:\n");
	
	for(i=1;i<=n;i++){
		if(i<=9){
			printf("0%d\t",i);
		}else{
			printf("%d\t",i);
		}
	}
}
