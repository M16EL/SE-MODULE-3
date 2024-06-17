//Accept 5 numbers from user and find those numbers factorials

#include<stdio.h>

int main(){
	int i , j , m, result ;
    for (int i = 0; i < 5; i++) {
        printf("Enter number : " );
        scanf("%d",&j);
        result = 1;
        for(m=1;m<=j;m++)
        {
        	result = result * m;
		}
		printf("\n%d\n",result);
    }
    return 0;
}



