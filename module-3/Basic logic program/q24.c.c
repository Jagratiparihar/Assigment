//24.Accept 5 employees name and salary and count average and total salary
#include<stdio.h>
int main()
{
	int emp1,emp2,emp3,emp4,emp5,totalsalary;
	float average;
	printf("Enter salary of Employee 1=");
	scanf("%d",&emp1);
	
	printf("Enter salary of Employee 2=");
	scanf("%d",&emp2);
	
	printf("Enter salary of Employee 3= ");
	scanf("%d",&emp3);
	
	printf("Enter salary of Employee 4=");
	scanf("%d",&emp4);
	
	printf("Enter salary of Employee 5=");
	scanf("%d",&emp5);
	
	totalsalary=emp1+emp2+emp3+emp4+emp5;
	average=(float)totalsalary/5;
	
	printf("/n Value of total salary is =%d",totalsalary);
	printf("/n Average value is %f",average);
	return 0;	
	}
