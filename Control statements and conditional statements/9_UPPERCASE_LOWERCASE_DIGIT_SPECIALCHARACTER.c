//C Program to Check Uppercase or Lowercase or Digit or Special Character
#include<stdio.h>

int main(){
	char anything;
	
	
	printf("Enter your anything:");
	scanf("%c",&anything);
	
	if(anything >= 'A' && anything <= 'Z'){
		printf("Your alphabet is uppercase");
	}else if(anything >= 'a' && anything <= 'z'){
		printf("Your alphabet is lowercase");
	} else if(anything >='0' && anything <='9' ){
		printf("your alphabet is digit");
	}else{
		printf("You enter a special character");
	}
	return 0;
}
