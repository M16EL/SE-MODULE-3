#include<stdio.h>

int main(){
	int n = 5,i ,j , sum;
	int m = 5; char Alphabet ='A';
	
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("%c",Alphabet);
			Alphabet++;
			
		}
	printf("\n");
	}
	return 0;
}








