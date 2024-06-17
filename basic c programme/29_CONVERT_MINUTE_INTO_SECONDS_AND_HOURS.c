#include <stdio.h>

int main() {
    int minutes;
    int hours, seconds;

    printf("Enter number of minutes: ");
    scanf("%d", &minutes);


    hours = minutes / 60;
    seconds = minutes * 60;

    printf("Equivalent: %d hours and %d seconds\n", hours, seconds);

    return 0;
}

