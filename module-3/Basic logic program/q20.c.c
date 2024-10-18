//20.Accept monthly salary from the user and deduct 10% insurance premium,10% loan installment find out of remaining salary.
#include<stdio.h>
int main()
{
	float monthlySalary,insurancePremium,loaninstallement,remainingSalary;
	printf("Enter the monthly salary:");
	scanf("%f",&monthlySalary);
	 
	 insurancePremium =monthlySalary*0.10;
	  loaninstallement =monthlySalary*0.10;
	 
	 remainingSalary = monthlySalary-(insurancePremium+loaninstallement);
	 printf("/nInsurance premium deducted:%.2f",insurancePremium);
	 printf("/nLoan installment deducted:%.2f",loaninstallement);
	 printf("/nRemaining salary: %.2f",remainingSalary);
	 
	 return 0;
}
