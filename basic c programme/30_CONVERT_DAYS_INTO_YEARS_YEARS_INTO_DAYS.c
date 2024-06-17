#include <stdio.h>

int main() {
    int years, days;

    printf("Enter number of years: ");
    scanf("%d", &years);


    days = years * 365;

    printf("Equivalent: %d days\n", days);

    return 0;
}

