#include <stdio.h>

int main() {
    char op,opr;
    double num1, num2, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);
    
    opr = '+','-','*','\';
    
    if(op!=opr){
    	printf("invalid operator");
	}
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    if (op == '+') {
        result = num1 + num2;
    } else if (op == '-') {
        result = num1 - num2;
    } else if (op == '*') {
        result = num1 * num2;
    } else if (op == '/') {
        if (num2 != 0) {
            result = num1 / num2;
        } else {
            printf("Error! Division by zero.\n");
            return 0; 
        }
    } else {
        printf("Error! Invalid operator.\n");
        return 0; 
		}

    printf("Result: %.2lf\n", result);
    return 0;
}


