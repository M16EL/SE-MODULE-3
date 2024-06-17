#include <stdio.h>

int main() {
    int num1, num2;
    double sum;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    
    sum = (long long)num1 + num2;

    printf("Sum: %lfd\n", sum);

    
    printf("Size of sum is %s range of int.\n", (sizeof(sum)) );

    return 0;
}


