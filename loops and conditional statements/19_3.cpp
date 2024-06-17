#include<stdio.h>

int main(){
	int n = 5,i ,j,m;

	
	 for ( i = 0; i < n; i++) {
            for ( j = 0; j < n-i-1; j++) {
                printf("  "); 
            }
            for(m=0;m<2*i+1;m++){
            	printf("*");
            	if(m<2*i){
            		printf(" ");
				}
			}
            
            printf("\n");
        }
	return 0;
}


