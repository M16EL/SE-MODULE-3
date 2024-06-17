//Accept marks from user and check pass or fail
#include<stdio.h>

int main(){
	int marks;
	
	printf("Enter Your Marks:");
	scanf("%d",&marks);
	
	if(marks>=35){
		printf("you are passing with %d",marks);
	}else{
		printf("you are fail");
	}
}
