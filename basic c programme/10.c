//WAP area of a rectangular prism formula : A=2(wl+hl+hw)
#include<stdio.h>
int main(){
	 float wl,hl,hw,formula;
	 
	 printf("Enter The prism width and length:");
	 scanf("%f",&wl);
	 
	  printf("Enter The prism height and length:");
	 scanf("%f",&hl);
	 
	  printf("Enter The prism height and width:");
	 scanf("%f",&hw);
	 
	 formula = 2*(wl+hl+hw);
	 
	 printf("area of a rectangular prism is: %f",formula);
	return 0;
	
}
