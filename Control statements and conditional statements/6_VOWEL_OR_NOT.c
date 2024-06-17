//Find the Character Is Vowel or Not
#include<stdio.h>

int main(){
	char alphabet;

	
	printf("Enter one character:");
	scanf("%c",&alphabet);
	
	if ((alphabet == 'a') || (alphabet == 'e') || (alphabet == 'i') || (alphabet == 'o') || (alphabet == 'u')){
	
		printf("this is vowel ",alphabet);
	}else{
		printf("this is alphabet ",alphabet);
	}
	return 0;
}
