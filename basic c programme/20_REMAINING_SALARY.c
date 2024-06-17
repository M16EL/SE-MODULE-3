#include<stdio.h>

int main()
{
	float monthly_salary, insurance_premium , loan_installment, remaining_salary;
	
	printf("Enter your monthlysalary:");
	scanf("%f", &monthly_salary);
	
	insurance_premium = monthly_salary * 0.1;
	loan_installment = monthly_salary * 0.1;
	printf("Your insurancepremium deducted amount is: %f\ns", insurance_premium);
	printf("Your loaninstallment deducted amount is: %f\ns", loan_installment);
	remaining_salary = monthly_salary - ( insurance_premium + loan_installment);
	printf("Your remaining salary is: %f", remaining_salary);
	
	
	return 0;
}





