//9.find circumference of triangle formula: triangle =a+b+c
#include<stdio.h>
int main()
{
	float cirumference,a,b,c;
	printf("/nEnter the value of side 1 =");
	scanf("%f",&a);
	printf("/nEnter the value of side 2 =");
	scanf("%f",&b);
	printf("/nEnter the value of side 3 =");
	scanf("%f",&c);
	
	cirumference=a+b+c;
	printf("/ncircumference of triangle =%.2f",cirumference);
	return 0;
}
