//WAP to accept the height of a person in centimeters and categorize the
//person according to their height.
#include<stdio.h>


int main(){
	float height;
	
	printf("Enter your height in centimeter:");
	scanf("%f",&height);
	
    if (height>121.92 && height<182.88){
    	printf("You are avrage");    	
	}else if(height>182.88 && height<243.84){
		printf("you are taller");
	}else if (height<121.92){
		printf("you are shorter");
	}
	
		return 0;
}
