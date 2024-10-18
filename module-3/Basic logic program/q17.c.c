//17.calculate person's insurance premium based on salar
#include<stdio.h>
int main()
{
	float salary,premium,premiumRate;
	
	printf("Enter the salary:");
	scanf("%f",&salary);
	if (salary< 60000)
	{
		premiumRate=0.07;
	}
	else if (salary < 80000)
	{
		premiumRate=0.08;
	}
	else
	{
		premiumRate=0.11;
	}
	premium=salary*premiumRate;
	
	printf("/nThe insurance premium is:%.2f",premium);
	return 0;
}

