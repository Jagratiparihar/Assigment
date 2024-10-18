//33.C program to read integer and print first three powers (n^1,n^2,n^3)
#include<stdio.h>
int main()
{
	int n;
	printf("Enter an integer:");
	scanf("%d",&n);
	printf("/n%d^1 = %d",n,n);
	printf("/n%d^2 = %d",n,n*n);
	printf("/n%d^3 = %d",n,n*n*n);
	return 0;
	
}
