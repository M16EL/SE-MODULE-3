#include<stdio.h>

int main(){
	int n,palindrome,rem,op;
	
	printf("Enter n:");
	scanf("%d",&n);
	
	op=n;
	
	while(n!=0){
		rem = n%10;
		palindrome= palindrome*10+rem;
		n = n/10;
	}
	
	if(op==palindrome){
		printf("\n %d number is palindrome",palindrome);
	}
	else{
		printf("%d number is not palindorme",palindrome);		
	}
	return 0;
}
