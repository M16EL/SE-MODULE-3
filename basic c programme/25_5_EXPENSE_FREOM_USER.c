#include <stdio.h>

int main() {
    float expense1, expense2, expense3, expense4, expense5;
    float totalExpense, averageExpense;

   
    printf("Enter expense 1: $");
    scanf("%f", &expense1);
    printf("Enter expense 2: $");
    scanf("%f", &expense2);
    printf("Enter expense 3: $");
    scanf("%f", &expense3);
    printf("Enter expense 4: $");
    scanf("%f", &expense4);
    printf("Enter expense 5: $");
    scanf("%f", &expense5);

    
    totalExpense = expense1 + expense2 + expense3 + expense4 + expense5;

    
    averageExpense = totalExpense / 5;

    
    printf("\nTotal expense: $%.2f\n", totalExpense);
    printf("Average expense: $%.2f\n", averageExpense);

    return 0;
}

