//12.Accept number of student from user:I need to give 5 apples to each student.How many apples are required?
#include<stdio.h>
int main()
{
	int number_of_students;
	int apples_per_student;
	int total_apples;
	
	printf("Enter the number of students:");
	scanf("%d",&number_of_students);
	
	
	total_apples = number_of_students * apples_per_student;
	printf("/n Total apples required:%d",total_apples);
	return 0;
}
