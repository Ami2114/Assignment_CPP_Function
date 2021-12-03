#include<stdio.h>
#include<math.h>
int add_contact();
int option();
int update_contact();
int menu();
int main()
{
	int a,b,c;
	a=menu();
	c=option();
	switch(c)
	{
		case 1:
			{
				b=add_contact();
				break;
			}
		case 2:
			{
				update_contact();
				break;
			}
		case 3:
		    {
				printf("You Exited");
				break;	
		    }	
	}
	return 0;
}
int menu()
{
	printf("||--------------------------------||\n");
	printf("||      1.Add a Contact           ||\n");     
	printf("||      2.Update a Contact        ||\n");
	printf("||      3.Exit                    ||\n");
	printf("||--------------------------------||\n");
}
int option()
{
	int choice;
	printf("Enter your choice:");
	scanf("%d",&choice);
	return choice;
}
int add_contact()
{
	double number,i=0,t;
	char name[20],ch;
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("Enter the name of the contact:");
	scanf("%s",&name);
	printf("Enter the contact number to add[10-digits]:");
	scanf("%lf",&number);
	while(number!=0)
	{
		number=trunc(number/10);
		i++;
	}
	if(i==10)
	{
		printf("============================\n");
		printf(" NUMBER SAVED SUCCESFULLY !\n");
		printf("============================\n");
	}
	if(i<10||i>10 && number==0)
	{
		printf("PLEASE ENTER THE VALID NUMBER");
		add_contact();
	}
	return 0;
}
int update_contact()
{
	double upn,i=0,t;
	char ch;
	printf("Update the number:");
	scanf("%lf",&upn);
	while(upn!=0)
	{
		upn=trunc(upn/10);
		i++;
	}
	if(i==10)
	{
		printf("=================================\n");
		printf(" UPDATED NUMBER SAVED SUCCESFULLY !\n");
		printf("=================================\n");
	}
	if(i<10||i>10 && upn==0)
	{
		printf("PLEASE ENTER THE VALID NUMBER");
		update_contact();
	}
	printf("Do you want to continue?[y/n]:");
	scanf("%s",&ch);
	if(ch=='y')
	{
		main();
	}
	if(ch=='n')
	{
		printf("YOU EXITED !");
	}
	return 0;
}


