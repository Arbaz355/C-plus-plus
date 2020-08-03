#include<stdio.h>
#include <conio.h>
int main()
{
	int a,b,c,choice;
	printf("\n Enter your choice");
	scanf("&d",&choice);
	while(choice!=3)
	{
	printf("\n press 1 for addition");
	printf("\n press2 for subtraction");
	printf("Enter any two number");
	scanf("%d%d",&a,&b);
	switch(choice)
	{
	case 1:
	
	
	c=a+b;
	printf("%dyour addition is",c);
	break;

	case 2:
		
		
	c=a-b;
	printf("&dyour subtraction is", c);
	break;
	default:
	printf("you have entred wrong choice");
	printf("\n please enter the write choice");	
	}
}
		
	
	getch();
}
