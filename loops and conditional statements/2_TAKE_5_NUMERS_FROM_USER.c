#include <stdio.h>

int main() {
    int i, value;

    for (i = 1; i <= 5; i++) {
        printf("Enter your value : ");
        scanf("%d", &value);
        printf("You entered: %d\n", value);
    }

    return 0;
}

