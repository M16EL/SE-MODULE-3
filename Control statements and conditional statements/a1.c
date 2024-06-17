#include<stdio.h>

int main(){
	int i ,j,row,col,arr[row][col];
	
	printf("Enter row and col:");
	scanf("%d %d",&row,&col);
	
	printf("Enter %d values:",row*col);
	
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d",arr[i][j]);
		}
	}
	
	return 0;
}
