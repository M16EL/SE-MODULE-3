#include<stdio.h>

int main(){
	int number , i  , even = 0, evensum = 0 , odd = 0, oddsum = 0 ;
		printf("Enter 10 values:\n");
		
	for(i=0;i<10;i++){
	    scanf("%d",&number);
		if(number % 2 == 0){
			even ++;
			evensum += number ;
		}else {
			odd ++ ;
			oddsum += number ;
		}
	}
		printf("even numbers: %d \n",even);
		printf("odd number: %d\n",odd);
		printf("even numbers sum: %d \n",evensum);
		printf("odd number sum: %d\n",oddsum);
		
		return 0;
}


