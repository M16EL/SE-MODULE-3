//WAP circumference of Rectangle formula : C = 4 * a
#include <stdio.h>

int main() {
    float area,width,length;

   
    printf("Enter the area of the rectangle: ");
    scanf("%f", & width);
    
    printf("Enter the area of the rectangle: ");
    scanf("%f",&length);
    
    area = width*length;
    

  
    float circumference = 4*area;
    

    
    printf("The circumference of the rectangle is: %.2f\n", circumference);

    return 0;
}
