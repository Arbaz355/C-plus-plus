#include<stdio.h>
#include<conio.h>
int main()
{
	int x;
	printf("Enter any year: ");
	scanf("%d",&x);
	if (x%4==0)
	{
		printf("YOU HAVE ENTERED A LEAP YEAR");
	}
	else 
	{
		printf("YOU HAVE ENTERED A NON-LEAP YEAR");
	}
	getch();
}
