//2.Write a C progam to read the value of on integer m and display the value of m is 1 larger than 0,0 when m is 0 and -1 when m is less than 0*/
#include<stdio.h>
int main()
{
	int m;
	printf("Enter an integer value for m:");
	scanf("%d",&m);
	if(m>0)
	{
		printf("The value of m is: 1/n");
	}
	else if (m==0)
	{
		printf("The value of m is: 0/n");
	}
	else
	{
		printf("The value of m is: -1/n");
		
	}
	return 0;
}
