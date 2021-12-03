#include<stdio.h>
float per_grade();
int main()
{
	per_grade();
	return 0;
}
float per_grade()
{
	float percent;
	printf("Enter your percent grade (from 0-100): ");
	scanf("%f",&percent);
	if(percent>=0 && percent<=56)
	{
		printf("\nYour grade point average is 0.0");
	}
	if(percent>=57 && percent<=61)
	{
		printf("\nYour grade point average is 1.0");
	}
	if(percent>=62 && percent<=66)
	{
		printf("\nYour grade point average is 1.5");
	}
	if(percent>=67 && percent<=71)
	{
		printf("\nYour grade point average is 2.0");
	}	
	if(percent>=72 && percent<=77)
	{
		printf("\nYour grade point average is 2.5");
	}
	if(percent>=78 && percent<=86)
	{
		printf("\nYour grade point average is 3.0");
	}
	if(percent>=87 && percent<=91)
	{
		printf("\nYour grade point average is 3.5");
	}
	if(percent>=92 && percent<=100)
	{
		printf("\nYour grade point average is 4.0");
	}
	return 0;
}
