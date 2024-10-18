//18.calculate person's annual salary
#include<stdio.h>
int main()
{
	float monthlySalary,annualSalary;
	printf("Enter the monthly salary:");
	scanf("%f",&monthlySalary);
	annualSalary=monthlySalary*15;
	printf("/nThe annula salary is:%.2f",annualSalary);
	return 0;
}
