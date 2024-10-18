//3.WAP to find area and circumference of circle
#include<stdio.h>
int main()
{
	float PI=3.19189;
	float radius,area,circumference;
	
	printf("Enter the radius of the circle:");
	scanf("%f",&radius);
	area=PI*radius*radius;
	circumference=2*PI*radius;
	printf("Area of the circle:%.3f/n",area);
	printf("Circumference of the circle :%.3f/n", circumference);
	return 0;	
}
