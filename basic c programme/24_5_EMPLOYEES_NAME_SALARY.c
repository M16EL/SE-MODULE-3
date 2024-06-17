#include <stdio.h>

int main() {
    char name1[50], name2[50], name3[50], name4[50], name5[50];
    float salary1, salary2, salary3, salary4, salary5;
    float totalSalary, averageSalary;

    
    printf("Enter name of employee 1: ");
    scanf("%s", name1);
    printf("Enter salary of employee 1: $");
    scanf("%f", &salary1);

    printf("Enter name of employee 2: ");
    scanf("%s", name2);
    printf("Enter salary of employee 2: $");
    scanf("%f", &salary2);

    printf("Enter name of employee 3: ");
    scanf("%s", name3);
    printf("Enter salary of employee 3: $");
    scanf("%f", &salary3);

    printf("Enter name of employee 4: ");
    scanf("%s", name4);
    printf("Enter salary of employee 4: $");
    scanf("%f", &salary4);

    printf("Enter name of employee 5: ");
    scanf("%s", name5);
    printf("Enter salary of employee 5: $");
    scanf("%f", &salary5);

    
    totalSalary = salary1 + salary2 + salary3 + salary4 + salary5;

    averageSalary = totalSalary / 5;

   
    printf("\nTotal salary of all employees: $%.2f\n", totalSalary);
    printf("Average salary of all employees: $%.2f\n", averageSalary);

    return 0;
}

