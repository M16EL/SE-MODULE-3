#include<stdio.h>

int main(){
    int row, col,row1 , col1 ,row2,col2 ,i ,j;
	printf("Enter row and colomus:");
	scanf("%d %d",&row1,&col1);
	int arr[row1][col1];
	printf("Enter %d values:",row1*col1);
	for(i=0;i<row1;i++){
		for(j=0;j<col1;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<row1;i++){
		for(j=0;j<col1;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	printf("Enter row and colomus:");
	scanf("%d %d",&row2,&col2);
	
	int arr1[row2][col2];
	int m,n;
	printf("Enter 4 values:");
	for(m=0;m<row2;m++){
		for(n=0;n<col2;n++){
			scanf("%d",&arr1[m][n]);
		}
	}
	for(m=0;m<row2;m++){
		for(n=0;n<col2;n++){
			printf("%d\t",arr1[m][n]);
		}
		printf("\n");
	}
	
	
//    int arr2[row][col];
//    int k,l,a;
//    
//    for(k=0;k<row1;k++){
//    	for(l=0;l<col2;l++){
//    		
//    			arr2[k][l] += arr[row1][col1]*arr1[row2][col2];
//    			scanf("%d",&arr2[row][col]);
//			}
//		
//	}
//	for(k=0;k<row1;k++){
//    	for(l=0;l<col2;l++){
//    		
//    			arr2[k][l] += arr[row1][col1]*arr1[row2][col2];
//    			printf("%d",arr2[row][col]);
//			}
//		
//	}
    
    
	

	
	
	return 0;
}




