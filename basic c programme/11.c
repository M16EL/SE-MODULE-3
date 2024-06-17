//WAP Find circumference of square formula : C = 4 * a
#include <stdio.h>

int main() {
    float a;

   
    printf("Enter the area of the square: ");
    scanf("%f", &a);

    float circumference = 4*a;
    
    printf("The circumference of the square is: %.2f\n", circumference);

    return 0;
}

