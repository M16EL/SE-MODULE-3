#include <stdio.h>

int main() {
    float salary, premium, rate;
    
    
    printf("Enter your salary: $");
    scanf("%f", &salary);
    printf("Enter Rate of insurance premium in percentage: ");
    scanf("%f", &rate);
    premium = salary * rate ;
    printf("Your insurance premium is : %f" ,premium);
    
    return 0;
}

