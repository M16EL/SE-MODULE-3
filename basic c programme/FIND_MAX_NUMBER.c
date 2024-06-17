//#include <stdio.h>
//
//int main() {
//    int num1, num2;
//
//    
//    printf("Enter first number: ");
//    scanf("%d", &num1);
//    printf("Enter second number: ");
//    scanf("%d", &num2);
//
//    
//    int max, min;
//
//    if (num1 > num2) {
//        max = num1;
//        min = num2;
//    } else {
//        max = num2;
//        min = num1;
//    }
//
//    printf("Maximum number: %d\n", max);
//    printf("Minimum number: %d\n", min);
//
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int sub1, sub2, sub3;
//    float total, percentage;
//
//    printf("Enter marks for subject 1: ");
//    scanf("%d", &sub1);
//    printf("Enter marks for subject 2: ");
//    scanf("%d", &sub2);
//    printf("Enter marks for subject 3: ");
//    scanf("%d", &sub3);
//
//    
//    total = sub1 + sub2 + sub3;
//    percentage = (total / 300.0) * 100;
//
//   
//    printf("Total marks: %.2f\n", total);
//    printf("Percentage: %.2f%%\n", percentage);
//
//    if (percentage >= 80) {
//        printf("Your grade is A\n");
//    } else if (percentage >= 60) {
//        printf("Your grade is B\n");
//    } else if (percentage >= 35) {
//        printf("Your grade is C\n");
//    } else if (percentage >= 0) {
//        printf("You are fail\n");
//    } else {
//        printf("Enter valid percentage\n");
//    }
//
//    return 0;
//}

#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

   
    if (num1 % 2 == 0) {
        printf("%d is even.\n", num1);
    } else {
        printf("%d is odd.\n", num1);
    }

    
    if (num2 % 2 == 0) {
        printf("%d is even.\n", num2);
    } else {
        printf("%d is odd.\n", num2);
    }

    return 0;
}



