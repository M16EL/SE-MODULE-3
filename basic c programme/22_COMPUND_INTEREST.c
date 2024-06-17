#include <stdio.h>
#include <math.h>

int main() {
    float P, R, t, amount, compoundInterest;

    
    printf("Enter the principal amount: ");
    scanf("%f", &P);
    
    printf("Enter the annual interest rate (in percentage): ");
    scanf("%f", &R);
    
    printf("Enter the time period (in years): ");
    scanf("%f", &t);

    R = R / 100;
    
    amount = P * pow((1 + R), t);
    printf("amount: %0.2f\n", amount);
    
    compoundInterest = amount - P;
    printf("CompoundInterest is : %0.2f" , compoundInterest);
    

    return 0;
}
