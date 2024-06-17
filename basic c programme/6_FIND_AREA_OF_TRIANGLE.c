#include <stdio.h>

int main() {
     float b, h, area ;
     printf("Enter the value of b:");
     scanf("%f", &b);
     printf("Enter the value of h:");
     scanf("%f", &h);
     area = ( b * h ) / 2 ;
     printf("Area of the Triangle :%0.2f\n ", area);
     return 0;
}
