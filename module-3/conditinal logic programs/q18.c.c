//18.Write a C program to calculate profit and loss on a transaction .
#include<stdio.h>
int main()
{
	int cp,sp,profit,loss;
	printf("Enter the cost price:");
	scanf("%d",&cp);
	
	printf("Enter the selling price");
	scanf("%d",&sp);
	profit = sp-cp;
	loss = cp-sp;
	if(profit <loss)
	{
		printf("The amount of loss is = %d rupess",loss);
		
	}
	else 
	{
		printf("The amount of profit is = %d rupees",profit);
	}
	return 0;
}
