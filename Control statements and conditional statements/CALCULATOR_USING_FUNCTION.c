#include<stdio.h>
int add(int a , int b);
int sub(int a,int b);
int mul(int a, int b);
int div(int x ,int y);
int mod(int m , int n);
int main(){
	int k,l;
	char op;
	printf("Enter first values:");
	scanf("%d",&k);
	printf("Enter operator:");
	scanf("%s",&op);
	printf("Enter second number:");
	scanf("%d",&l);
	
	switch(op){
		case('+'):
		    printf("%d",add(k,l));
			break;
		case('-'):
			printf("%d",sub(k,l));
			break;
		case('*'):
		    printf("%d",mul(k,l));
			break;
		case('/'):
			printf("%d",div(k,l));
			break;
		case('%'):
		    printf("%d",mod(k,l));
			break;
		default:
			printf("Invalid choice.");
	}
	return 0;
}

int  add(int a , int b){

	return a+b;
}

int  sub(int a,int b){
	return a-b;
}

int mul(int a,int b){
	return a*b;
}

int div(int x ,int y){
	return x/y;
}

int mod(int m , int n){
	return m%n;
}
