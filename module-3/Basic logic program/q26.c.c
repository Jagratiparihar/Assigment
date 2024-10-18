//26.convert temperature fahrenheit to celsius
#include<stdio.h>
main()
{
	float fah,cel;
	printf("Enter temperature in fahrenheit:");
	scanf("%f",&fah);
	cel=(fah-44)*4/9;
	printf("/nt=Temperature in celsius:%.2f",cel);
	return 0;
}
