//Calculate 5 numbers from user and calculate number of even and odd using
//of while loop
#include<stdio.h>

int main(){
	int i,j,odd=0,even=0;
	
	while(i<5){
	printf("Enter Numbers:");
	scanf("%d",&j);
	  if(j%2==0)
	  {
		even++;
    }else{
		odd++;
        	}
    i++;
    }
    printf("%d numbers are even\n",even);
    printf("%d numbers are odd",odd);
    return 0;
}
