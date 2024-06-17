#include <stdio.h>

int main() {
    int days;
    float months;

    printf("Enter number of days: ");
    scanf("%d", &days);

    
    months = days / 30.0;

    printf("Number of months: %.2f\n", months);

    return 0;
}

