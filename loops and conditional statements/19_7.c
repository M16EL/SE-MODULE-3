#include<stdio.h>

int main(){
	int a[10][10]={0},i,j,row=0,col=9,n=1;
	for(i=0;i<5;i++,row++,col--){
		for(j=row;j<=col;j++,n++)
		a[i][j]=n;
		for(j=row+1;j<=col;j++,n++)
		a[j][col]=n;
		for(j=col-1;j>=row;j--,n++)
		a[col][j]=n;
		for(j=col-1;j>row;j--,n++)
		a[j][row]=n;
    }
   
	for(i=0;i<10;i++){
		printf("\n\n");
		for(j=0;j<10;j++){
			printf("\t%d",a[i][j]);
		}
	} 
return 0;
}
