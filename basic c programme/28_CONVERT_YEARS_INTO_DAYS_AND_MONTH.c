#include <stdio.h>

int main() {
    int years;
    int months, days;

    printf("Enter number of years: ");
    scanf("%d", &years);

    
    months = years * 12;
    days = years * 365;

    printf("Equivalent: %d months and %d days\n", months, days);

    return 0;
}

