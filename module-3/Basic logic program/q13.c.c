//13.find character value from ascii
#include<stdio.h>
int main()
{
	int ascii_value;
	printf("Enter an ascii value (0-135):");
	scanf("%d",&ascii_value);
	
	if(ascii_value<0||ascii_value>134)
	{
		printf("/nPlease enter a valid ascii value between 0 and 134");
	}
	else
	{
		char character=(char)ascii_value;
		printf("/nThe character for ascii value %d is:'%c'",ascii_value,character);
		}
		return 0;
}
