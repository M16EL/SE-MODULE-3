#include <stdio.h>

int main() {
    int unit;
    float charge, total;

    printf("Enter the unit consumed by the user: ");
    scanf("%d", &unit);

    if (unit <= 350) {
        charge = unit * 1.20;
    } else if (unit <= 600) {
        charge = 350 * 1.20 + (unit - 350) * 1.50;
    } else if (unit <= 800) {
        charge = 350 * 1.20 + 250 * 1.50 + (unit - 600) * 1.80;
    } else {
        charge = 350 * 1.20 + 250 * 1.50 + 200 * 1.80 + (unit - 800) * 2.00;
    }

    if (charge > 800) {
        total = charge + charge * 0.18;
    } else if (charge < 256) {
        total = 256;
    } else {
        total = charge;
    }

    printf("Total amount to be paid to the customer: %.2f\n", total);

    return 0;
}

