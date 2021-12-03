#include<stdio.h>

int main()
{
	int num1=2,num2=4;
	swap(&num1,&num2);
	printf("num1 is %d and num2 is %d",num1,num2);
}
swap(int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
}
