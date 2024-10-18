//8.WAP to accept the height of a person in centimeters and categorize the person according to their height 
#include<stdio.h>
int main()
{
	float height;
	printf("Enter your height=");
	scanf("%f",&height);
	if(height<5.6)
	{
		printf("/nPerson is small");
	}
	else if(height>=5.6 && height<=7)
	{
		printf("/nPerson is average");
	}
	else 
	{
		printf("/nPerson is tall");
		
	}
	return 0;
}
