#include <stdio.h>

int main() {
    float radius, area, circumference;
    float PI = 3.14159;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

   
    printf("Area of the circle: %0.2f\n", area);
    printf("Circumference of the circle: %0.2lf\n", circumference);

    return 0;
}
