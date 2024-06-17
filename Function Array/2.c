//WAP of Addition, Subtraction, Multiplication and Division using Switch
//case.(Must Be Menu Driven)

#include <stdio.h>

int main() {
    int choice;
    float numbers[2]; 
    float result;

    while (1) {
        
        printf("\nMenu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 5) {
            
            printf("Exiting the program.\n");
            break;
        }

       
        printf("Enter two numbers: ");
        for (int i = 0; i < 2; i++) {
            scanf("%f", &numbers[i]);
        }

        
        switch (choice) {
            case 1:
                result = numbers[0] + numbers[1];
                printf("Result of addition: %.2f\n", result);
                break;
            case 2:
                result = numbers[0] - numbers[1];
                printf("Result of subtraction: %.2f\n", result);
                break;
            case 3:
                result = numbers[0] * numbers[1];
                printf("Result of multiplication: %.2f\n", result);
                break;
            case 4:
                if (numbers[1] != 0) {
                    result = numbers[0] / numbers[1];
                    printf("Result of division: %.2f\n", result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

