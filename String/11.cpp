#include<stdio.h>
#include<stdlib.h>

int main(){
	char str[100];
	int ctr,ch,i;
	
	printf("\n Replace lowercase by uppercase and vice-versa :\n");
	printf("--------------------------------------------------\n");
	
	printf("Input the string :");
	fgets(str,sizeof(str),stdin);
	
	i=strlen(str);
	
	ctr=i;
	
	printf("After given sentence is : %s",str);
	
	printf("After Case changed the string is :");
	
	for(i=0;i<ctr;i++){
		ch = islower(str[i]) ? toupper(str[i]): tolower(str[i]);
		putchar(ch);//print characters
	}
	printf("\n\n");
	
	return 0;
}
