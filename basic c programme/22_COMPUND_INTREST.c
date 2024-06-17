#include <stdio.h>
#include <math.h>

int main() {
    float P, R, t, compoundInterest;

    
    printf("Enter the principal amount: ");
    scanf("%f", &P);
    
    printf("Enter the annual interest rate (in percentage): ");
    scanf("%f", &R);
    
    printf("Enter the time period (in years): ");
    scanf("%f", &t);

    R = R / 100;
    
    compoundInterest = P * pow((1 + R), t);
    printf("Compound Interest: %0.2f\n", compoundInterest);

    return 0;
}
