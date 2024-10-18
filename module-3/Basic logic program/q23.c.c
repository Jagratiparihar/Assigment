//23.WAP to calculate swap 2 number with using of multipliction and division.
#include<stdio.h>
int main()
{
	int a,b;
	printf("/nEnter two number:");
	printf("Number 1:");
	scanf("%d",&a);
	printf("/nEnter two number:");
	printf("Number 2:");
	scanf("%d",&b);
	
	if(b !=0)
	{
		a=a*b;
		b=a/b;
		a=a/b;
		
		printf("/nAfter swapping:Number 1=%d,number 2=%d",a,b);
	}
	else
	{
		printf("/nCannot swap:Division by zero is not allowed.");
	}
	return 0;
}
