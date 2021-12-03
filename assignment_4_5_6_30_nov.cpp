#include<stdio.h>
float triangle();
float rhombus();
float pllgm();
int main()
{
	triangle();
	rhombus();
	pllgm();
	return 0;
}
float triangle()
{
	float b,h,area;
	printf("Enter height and base: \n");
	scanf("%f %f",&h,&b);
	area=0.5*b*h;
	printf("Area of right angled triangle is %f\n",area);
	return 0;
}
float rhombus()
{
	float d1,d2,area;
	printf("Enter d1 and d2: \n");
	scanf("%f %f",&d1,&d2);
	area=d1*d2/2;
	printf("Area of rhombus is %f\n",area);
	return 0;
}
float pllgm()
{
	float b,h,area;
	printf("Enter b and h: \n");
	scanf("%f %f",&b,&h);
	area=b*h;
	printf("Area of pllgm is %f\n",area);
	return 0;
}
