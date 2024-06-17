#include <stdio.h>

int main() {
    float bill, total;

    printf("Enter the bill amount: ");
    scanf("%f", &bill);

    if (bill > 800) {
        total = bill + bill * 0.18;
    } else if (bill < 256) {
        total = 256;
    } else {
        total = bill;
    }

    printf("Total amount to be paid: %.2f\n", total);

    return 0;
}

